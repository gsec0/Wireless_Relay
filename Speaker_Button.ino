#include <ESP8266Ping.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "index.h"

ESP8266WebServer server(80);
#define io_pin 0

char* ssid = "";
char* password = "";
unsigned char pcFails, tvFails, gatewayFails;
const IPAddress PC(192,168,0,10);
const IPAddress TV(192,168,0,14);
const IPAddress GATE(192,168,0,1);

void setup() {
  delay(250);
  pinMode(io_pin, OUTPUT);
  delay(250);
  digitalWrite(io_pin, LOW); // HIGH turns OFF, LOW turn ON
  
  //Serial.begin(115200);
  //Serial.println();
  WiFi.begin(ssid, password);

  //Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    //Serial.print(".");
  }
  
  //Serial.println();
  //Serial.print("Connected, IP address: ");
  //Serial.println(WiFi.localIP());
  
  server.on("/",[](){server.send_P(200,"text/html",webpage);});
  server.on("/toggle",toggleSpeaker);
  server.begin();

  pcFails = 0;
  tvFails = 0;
  gatewayFails = 0;
}
void loop() {
  static bool stat, spkOff = false;
  static unsigned long timer = (unsigned long)millis();
  
  server.handleClient();
  if (((unsigned long)millis() - timer) > 5000) {
    //Serial.print("Pinging PC: "); Serial.print(PC); Serial.println(" ...");
    stat = Ping.ping(PC, 1);
    //Serial.println(stat ? "Success" : "Fail");
    if (stat) {
      pcFails = 0;
      spkOff = false;
      //Serial.print("Latency: ");
      //Serial.println(Ping.averageTime());
    } else {
      pcFails = pcFails < 3 ? pcFails + 1 : pcFails;
    }
    //Serial.print("PC Fails: "); Serial.println(pcFails);
    //Serial.println();

    //Serial.print("Pinging TV: "); Serial.print(TV); Serial.println(" ...");
    stat = Ping.ping(TV, 1);
    //Serial.println(stat ? "Success" : "Fail");
    if (stat) {
      tvFails = 0;
      spkOff = false;
      //Serial.print("Latency: ");
      //Serial.println(Ping.averageTime());
    } else {
      tvFails = tvFails < 3 ? tvFails + 1 : tvFails;
    }
    //Serial.print("TV Fails: "); Serial.println(tvFails);
    //Serial.println();

    //Serial.print("Pinging GATEWAY: "); Serial.print(GATE); Serial.println(" ...");
    stat = Ping.ping(GATE, 1);
    //Serial.println(stat ? "Success" : "Fail");
    if (stat) {
      gatewayFails = 0;
      //Serial.print("Latency: ");
      //Serial.println(Ping.averageTime());
    } else {
      gatewayFails = 1;
    }
    //Serial.print("GATEWAY Fails: "); Serial.println(gatewayFails);
    //Serial.println();
    
    timer = (unsigned long)millis();
  }

  if (pcFails >= 3 && tvFails >= 3 && gatewayFails == 0 && !spkOff) {
    digitalWrite(io_pin, HIGH);
    spkOff = true;
  }
}

//keep track of the pin status
//poll loop every ~1min (3 retries if failed) both TV and PC. if both are off then turn off if not off.
//
void toggleSpeaker() {
  digitalWrite(io_pin,!digitalRead(io_pin));
  server.send(200,"text/plain",digitalRead(io_pin)?"OFF":"ON");
}
