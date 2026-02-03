EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Connector:USB_B_Micro J2
U 1 1 5EF549D0
P 4100 3350
F 0 "J2" H 4157 3817 50  0000 C CNN
F 1 "USB_B_Micro" H 4157 3726 50  0000 C CNN
F 2 "Connector_USB:USB_Micro-B_Molex-105017-0001" H 4250 3300 50  0001 C CNN
F 3 "~" H 4250 3300 50  0001 C CNN
	1    4100 3350
	1    0    0    -1  
$EndComp
$Comp
L Regulator_Linear:AMS1117-3.3 U1
U 1 1 5EF588C5
P 5150 3150
F 0 "U1" H 5150 3392 50  0000 C CNN
F 1 "AMS1117-3.3" H 5150 3301 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-223-3_TabPin2" H 5150 3350 50  0001 C CNN
F 3 "http://www.advanced-monolithic.com/pdf/ds1117.pdf" H 5250 2900 50  0001 C CNN
	1    5150 3150
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x02_Male J1
U 1 1 5EF5A635
P 3900 2700
F 0 "J1" H 4008 2881 50  0000 C CNN
F 1 "PWR" H 4008 2790 50  0000 C CNN
F 2 "Connector_JST:JST_XH_B2B-XH-A_1x02_P2.50mm_Vertical" H 3900 2700 50  0001 C CNN
F 3 "~" H 3900 2700 50  0001 C CNN
	1    3900 2700
	1    0    0    1   
$EndComp
$Comp
L Device:C C1
U 1 1 5EF5DEF9
P 4800 3500
F 0 "C1" H 4915 3546 50  0000 L CNN
F 1 "100nF" H 4915 3455 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 4838 3350 50  0001 C CNN
F 3 "~" H 4800 3500 50  0001 C CNN
	1    4800 3500
	1    0    0    -1  
$EndComp
$Comp
L Device:CP C2
U 1 1 5EF5EE2A
P 5600 3500
F 0 "C2" H 5718 3546 50  0000 L CNN
F 1 "10uF" H 5718 3455 50  0000 L CNN
F 2 "Capacitor_THT:CP_Radial_D4.0mm_P2.00mm" H 5638 3350 50  0001 C CNN
F 3 "~" H 5600 3500 50  0001 C CNN
	1    5600 3500
	1    0    0    -1  
$EndComp
$Comp
L Device:R R1
U 1 1 5EF60506
P 5900 3300
F 0 "R1" V 6000 3250 50  0000 L CNN
F 1 "510R" V 5900 3200 50  0000 L CNN
F 2 "Resistor_SMD:R_0402_1005Metric" V 5830 3300 50  0001 C CNN
F 3 "~" H 5900 3300 50  0001 C CNN
	1    5900 3300
	0    1    1    0   
$EndComp
$Comp
L Switch:SW_Push SW1
U 1 1 5EF65055
P 5950 4200
F 0 "SW1" H 5950 4485 50  0000 C CNN
F 1 "SW_Push" H 5950 4394 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H4.3mm" H 5950 4400 50  0001 C CNN
F 3 "~" H 5950 4400 50  0001 C CNN
	1    5950 4200
	1    0    0    -1  
$EndComp
Wire Wire Line
	4400 3150 4800 3150
Wire Wire Line
	4800 3150 4800 3350
Wire Wire Line
	4800 3150 4850 3150
Connection ~ 4800 3150
Wire Wire Line
	4100 3750 4100 3800
Wire Wire Line
	4100 3800 4550 3800
Wire Wire Line
	4800 3800 4800 3650
Wire Wire Line
	4100 2600 4800 2600
Wire Wire Line
	4100 2700 4550 2700
Wire Wire Line
	4550 2700 4550 3800
Connection ~ 4550 3800
Wire Wire Line
	4550 3800 4800 3800
$Comp
L power:GND #PWR0101
U 1 1 5EF6F4C9
P 4550 4000
F 0 "#PWR0101" H 4550 3750 50  0001 C CNN
F 1 "GND" H 4555 3827 50  0000 C CNN
F 2 "" H 4550 4000 50  0001 C CNN
F 3 "" H 4550 4000 50  0001 C CNN
	1    4550 4000
	1    0    0    -1  
$EndComp
Wire Wire Line
	4550 3800 4550 4000
Wire Wire Line
	4800 3800 5150 3800
Wire Wire Line
	5150 3800 5150 3450
Connection ~ 4800 3800
Wire Wire Line
	5600 3350 5600 3300
Wire Wire Line
	5600 3150 5450 3150
Wire Wire Line
	5600 3650 5600 3800
Wire Wire Line
	5600 3800 5150 3800
Connection ~ 5150 3800
$Comp
L power:+3V3 #PWR0102
U 1 1 5EF7207D
P 5750 3150
F 0 "#PWR0102" H 5750 3000 50  0001 C CNN
F 1 "+3V3" V 5765 3278 50  0000 L CNN
F 2 "" H 5750 3150 50  0001 C CNN
F 3 "" H 5750 3150 50  0001 C CNN
	1    5750 3150
	0    1    1    0   
$EndComp
Connection ~ 5600 3150
$Comp
L power:+5V #PWR0103
U 1 1 5EF72C2A
P 4900 2600
F 0 "#PWR0103" H 4900 2450 50  0001 C CNN
F 1 "+5V" V 4915 2728 50  0000 L CNN
F 2 "" H 4900 2600 50  0001 C CNN
F 3 "" H 4900 2600 50  0001 C CNN
	1    4900 2600
	0    1    1    0   
$EndComp
Wire Wire Line
	4900 2600 4800 2600
Connection ~ 4800 2600
$Comp
L Connector:Conn_01x08_Female J4
U 1 1 5EF6610D
P 6650 3400
F 0 "J4" H 6678 3376 50  0000 L CNN
F 1 "Conn_01x08_Female" H 6678 3285 50  0001 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_2x04_P2.54mm_Vertical" H 6650 3400 50  0001 C CNN
F 3 "~" H 6650 3400 50  0001 C CNN
	1    6650 3400
	1    0    0    -1  
$EndComp
Wire Wire Line
	6150 3100 6150 3800
Wire Wire Line
	6150 3800 5600 3800
Connection ~ 5600 3800
Wire Wire Line
	6250 3200 6250 2450
Text Label 6250 2800 1    50   ~ 0
TX
Wire Wire Line
	5750 3150 5600 3150
Wire Wire Line
	5750 3300 5600 3300
Connection ~ 5600 3300
Wire Wire Line
	5600 3300 5600 3150
Wire Wire Line
	5750 4200 5600 4200
Wire Wire Line
	5600 4200 5600 3800
Wire Wire Line
	6150 4200 6200 4200
Wire Wire Line
	6200 4200 6200 3600
$Comp
L Device:LED D1
U 1 1 5EF83983
P 6500 4450
F 0 "D1" H 6493 4666 50  0000 C CNN
F 1 "R_LED" H 6493 4575 50  0000 C CNN
F 2 "LED_THT:LED_D3.0mm" H 6500 4450 50  0001 C CNN
F 3 "~" H 6500 4450 50  0001 C CNN
	1    6500 4450
	1    0    0    -1  
$EndComp
Wire Wire Line
	6350 4450 5600 4450
Wire Wire Line
	5600 4450 5600 4200
Connection ~ 5600 4200
Wire Wire Line
	6050 3300 6250 3300
Wire Wire Line
	6250 3200 6450 3200
Wire Wire Line
	6150 3100 6450 3100
Wire Wire Line
	6450 3800 6350 3800
Text Label 6350 2800 1    50   ~ 0
RX
Wire Wire Line
	6350 2550 6450 2550
Wire Wire Line
	6250 2450 6450 2450
$Comp
L power:+5V #PWR0104
U 1 1 5EFB7BD7
P 6350 2350
F 0 "#PWR0104" H 6350 2200 50  0001 C CNN
F 1 "+5V" V 6365 2478 50  0000 L CNN
F 2 "" H 6350 2350 50  0001 C CNN
F 3 "" H 6350 2350 50  0001 C CNN
	1    6350 2350
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6450 2350 6350 2350
$Comp
L power:GND #PWR0105
U 1 1 5EFBA612
P 6400 2700
F 0 "#PWR0105" H 6400 2450 50  0001 C CNN
F 1 "GND" H 6500 2700 50  0000 C CNN
F 2 "" H 6400 2700 50  0001 C CNN
F 3 "" H 6400 2700 50  0001 C CNN
	1    6400 2700
	1    0    0    -1  
$EndComp
Wire Wire Line
	6450 2650 6400 2650
Wire Wire Line
	6400 2650 6400 2700
$Comp
L Switch:SW_SPDT SW2
U 1 1 5EFBE2B4
P 6550 4100
F 0 "SW2" H 6550 4293 50  0000 C CNN
F 1 "SW_SPDT" H 6550 4294 50  0001 C CNN
F 2 "Button_Switch_THT:SW_CuK_OS102011MA1QN1_SPDT_Angled" H 6550 4100 50  0001 C CNN
F 3 "~" H 6550 4100 50  0001 C CNN
	1    6550 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	6350 4100 6250 4100
Wire Wire Line
	6800 4250 6800 4200
Wire Wire Line
	6800 4200 6750 4200
$Comp
L power:GND #PWR0106
U 1 1 5F004D32
P 6800 4250
F 0 "#PWR0106" H 6800 4000 50  0001 C CNN
F 1 "GND" H 6900 4250 50  0000 C CNN
F 2 "" H 6800 4250 50  0001 C CNN
F 3 "" H 6800 4250 50  0001 C CNN
	1    6800 4250
	1    0    0    -1  
$EndComp
$Comp
L Device:R R3
U 1 1 5EF5F90D
P 7300 4450
F 0 "R3" V 7400 4400 50  0000 L CNN
F 1 "100R" V 7300 4350 50  0000 L CNN
F 2 "Resistor_SMD:R_0402_1005Metric" V 7230 4450 50  0001 C CNN
F 3 "~" H 7300 4450 50  0001 C CNN
	1    7300 4450
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R2
U 1 1 5EF7B2ED
P 7000 4100
F 0 "R2" V 6900 4100 50  0000 C CNN
F 1 "300k" V 7000 4100 50  0000 C CNN
F 2 "Resistor_SMD:R_0402_1005Metric" V 6930 4100 50  0001 C CNN
F 3 "~" H 7000 4100 50  0001 C CNN
	1    7000 4100
	0    1    1    0   
$EndComp
$Comp
L power:+3V3 #PWR0107
U 1 1 5EF7E520
P 7550 3750
F 0 "#PWR0107" H 7550 3600 50  0001 C CNN
F 1 "+3V3" H 7565 3923 50  0000 C CNN
F 2 "" H 7550 3750 50  0001 C CNN
F 3 "" H 7550 3750 50  0001 C CNN
	1    7550 3750
	1    0    0    -1  
$EndComp
Wire Wire Line
	7550 3750 7550 3850
Wire Wire Line
	7550 4300 7550 4450
Wire Wire Line
	7550 4450 7450 4450
$Comp
L Device:R R4
U 1 1 5EF85534
P 7550 4700
F 0 "R4" H 7620 4746 50  0000 L CNN
F 1 "1K" H 7620 4655 50  0000 L CNN
F 2 "Resistor_SMD:R_0402_1005Metric" V 7480 4700 50  0001 C CNN
F 3 "~" H 7550 4700 50  0001 C CNN
	1    7550 4700
	1    0    0    -1  
$EndComp
$Comp
L Device:R R5
U 1 1 5EF88622
P 7550 5200
F 0 "R5" H 7620 5246 50  0000 L CNN
F 1 "10K" H 7620 5155 50  0000 L CNN
F 2 "Resistor_SMD:R_0402_1005Metric" V 7480 5200 50  0001 C CNN
F 3 "~" H 7550 5200 50  0001 C CNN
	1    7550 5200
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0108
U 1 1 5EF8A966
P 7550 5450
F 0 "#PWR0108" H 7550 5200 50  0001 C CNN
F 1 "GND" H 7555 5277 50  0000 C CNN
F 2 "" H 7550 5450 50  0001 C CNN
F 3 "" H 7550 5450 50  0001 C CNN
	1    7550 5450
	1    0    0    -1  
$EndComp
Wire Wire Line
	7550 4550 7550 4450
Connection ~ 7550 4450
Wire Wire Line
	7550 4850 7550 4950
Wire Wire Line
	7550 5050 7550 4950
Connection ~ 7550 4950
Wire Wire Line
	7550 5350 7550 5400
$Comp
L Transistor_BJT:S8550 Q1
U 1 1 5EF72F29
P 7450 4100
F 0 "Q1" H 7640 4054 50  0000 L CNN
F 1 "S8550" H 7640 4145 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 7650 4025 50  0001 L CIN
F 3 "http://www.unisonic.com.tw/datasheet/S8550.pdf" H 7450 4100 50  0001 L CNN
	1    7450 4100
	1    0    0    1   
$EndComp
Wire Wire Line
	8050 5400 7550 5400
Connection ~ 7550 5400
Wire Wire Line
	7550 5400 7550 5450
Connection ~ 7550 3850
Wire Wire Line
	7550 3850 7550 3900
Wire Wire Line
	7750 4950 7550 4950
Wire Wire Line
	8050 5150 8050 5400
Connection ~ 8350 3850
Wire Wire Line
	8350 3750 8350 3850
$Comp
L power:+5V #PWR0109
U 1 1 5EF9C3C1
P 8350 3750
F 0 "#PWR0109" H 8350 3600 50  0001 C CNN
F 1 "+5V" H 8365 3923 50  0000 C CNN
F 2 "" H 8350 3750 50  0001 C CNN
F 3 "" H 8350 3750 50  0001 C CNN
	1    8350 3750
	1    0    0    -1  
$EndComp
Wire Wire Line
	8350 3850 8350 3900
Wire Wire Line
	8050 3850 8350 3850
Wire Wire Line
	8050 4050 8050 3850
Connection ~ 8050 4600
Wire Wire Line
	8050 4600 8050 4750
Wire Wire Line
	8350 4600 8350 4500
Wire Wire Line
	8050 4600 8350 4600
Wire Wire Line
	8050 4350 8050 4600
$Comp
L Relay:SANYOU_SRD_Form_C K1
U 1 1 5EF95E4C
P 8550 4200
F 0 "K1" H 8980 4200 50  0000 L CNN
F 1 "SANYOU_SRD_Form_C" H 8980 4155 50  0001 L CNN
F 2 "Relay_THT:Relay_SPDT_SANYOU_SRD_Series_Form_C" H 9000 4150 50  0001 L CNN
F 3 "http://www.sanyourelay.ca/public/products/pdf/SRD.pdf" H 8550 4200 50  0001 C CNN
	1    8550 4200
	1    0    0    -1  
$EndComp
$Comp
L Transistor_BJT:S8050 Q2
U 1 1 5EF618FA
P 7950 4950
F 0 "Q2" H 8140 4996 50  0000 L CNN
F 1 "S8050" H 8140 4905 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 8150 4875 50  0001 L CIN
F 3 "http://www.unisonic.com.tw/datasheet/S8050.pdf" H 7950 4950 50  0001 L CNN
	1    7950 4950
	1    0    0    -1  
$EndComp
Wire Wire Line
	7250 4100 7150 4100
Wire Wire Line
	6650 4450 7150 4450
Wire Wire Line
	6750 4000 6800 4000
Wire Wire Line
	6800 4000 6800 4100
Wire Wire Line
	6800 4100 6850 4100
$Comp
L Diode:1N4148 D2
U 1 1 5F02AB71
P 8050 4200
F 0 "D2" V 8150 4050 50  0000 L CNN
F 1 "1N4148" V 8200 3850 50  0001 L CNN
F 2 "Diode_THT:D_DO-35_SOD27_P7.62mm_Horizontal" H 8050 4025 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/1N4148_1N4448.pdf" H 8050 4200 50  0001 C CNN
	1    8050 4200
	0    1    1    0   
$EndComp
Wire Wire Line
	4800 2600 4800 3150
Wire Wire Line
	6450 3400 6250 3400
Wire Wire Line
	6250 3400 6250 3300
Wire Wire Line
	6250 3500 6450 3500
Wire Wire Line
	6250 3500 6250 4100
Wire Wire Line
	6450 3600 6200 3600
Wire Wire Line
	6350 3700 6450 3700
Wire Wire Line
	6350 2550 6350 3700
Wire Wire Line
	6350 3800 6350 3850
Wire Wire Line
	6350 3850 7550 3850
$Comp
L Connector:Screw_Terminal_01x02 J5
U 1 1 5F063D29
P 9400 4150
F 0 "J5" H 9480 4142 50  0000 L CNN
F 1 "Screw_Terminal_01x02" H 9480 4051 50  0000 L CNN
F 2 "TerminalBlock:TerminalBlock_Altech_AK300-2_P5.00mm" H 9400 4150 50  0001 C CNN
F 3 "~" H 9400 4150 50  0001 C CNN
	1    9400 4150
	1    0    0    -1  
$EndComp
Wire Wire Line
	8750 4500 8750 4650
Wire Wire Line
	8750 4650 9100 4650
Wire Wire Line
	9100 4650 9100 4250
Wire Wire Line
	9100 4250 9200 4250
Wire Wire Line
	8850 3900 8850 3850
Wire Wire Line
	8850 3850 9100 3850
Wire Wire Line
	9100 3850 9100 4150
Wire Wire Line
	9100 4150 9200 4150
$Comp
L Connector:Conn_01x04_Female J3
U 1 1 5EF5C9AD
P 6650 2450
F 0 "J3" H 6678 2426 50  0000 L CNN
F 1 "Debug_Port" H 6678 2335 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x04_P2.54mm_Vertical" H 6650 2450 50  0001 C CNN
F 3 "~" H 6650 2450 50  0001 C CNN
	1    6650 2450
	1    0    0    -1  
$EndComp
$EndSCHEMATC
