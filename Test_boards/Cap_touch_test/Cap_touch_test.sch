EESchema Schematic File Version 4
LIBS:Cap_touch_test-cache
EELAYER 26 0
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
L MCU_NXP_LPC804:LPC804-TSSOP24 U1
U 1 1 5E066842
P 2950 1900
F 0 "U1" H 2950 2728 50  0000 C CNN
F 1 "LPC804-TSSOP24" H 2950 2637 50  0000 C CNN
F 2 "Package_SO:TSSOP-24_4.4x7.8mm_P0.65mm" H 2250 1900 50  0001 C CNN
F 3 "" H 2250 1900 50  0001 C CNN
	1    2950 1900
	1    0    0    -1  
$EndComp
$Comp
L Connector:Screw_Terminal_01x02 J2
U 1 1 5E06694F
P 5850 800
F 0 "J2" H 5930 792 50  0000 L CNN
F 1 "Screw_Terminal_01x02" H 5930 701 50  0000 L CNN
F 2 "TerminalBlock:TerminalBlock_bornier-2_P5.08mm" H 5850 800 50  0001 C CNN
F 3 "~" H 5850 800 50  0001 C CNN
	1    5850 800 
	1    0    0    -1  
$EndComp
Text GLabel 2500 1250 0    50   Input ~ 0
3v3
Text GLabel 750  550  0    50   Input ~ 0
GND
$Comp
L power:GND #PWR01
U 1 1 5E066AB3
P 850 700
F 0 "#PWR01" H 850 450 50  0001 C CNN
F 1 "GND" H 855 527 50  0000 C CNN
F 2 "" H 850 700 50  0001 C CNN
F 3 "" H 850 700 50  0001 C CNN
	1    850  700 
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  550  850  550 
Wire Wire Line
	850  550  850  700 
Text GLabel 2500 2650 0    50   Input ~ 0
GND
Wire Wire Line
	2500 2650 2950 2650
Wire Wire Line
	2500 1250 2950 1250
Text GLabel 5450 800  0    50   Input ~ 0
3v3
Text GLabel 5450 900  0    50   Input ~ 0
GND
Wire Wire Line
	5450 800  5650 800 
Wire Wire Line
	5450 900  5650 900 
$Comp
L pspice:CAP C6
U 1 1 5E066D2F
P 5400 1300
F 0 "C6" H 5578 1346 50  0000 L CNN
F 1 "0.1uF" H 5578 1255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 5400 1300 50  0001 C CNN
F 3 "~" H 5400 1300 50  0001 C CNN
	1    5400 1300
	1    0    0    -1  
$EndComp
$Comp
L pspice:CAP C7
U 1 1 5E066DC8
P 6000 1300
F 0 "C7" H 6178 1346 50  0000 L CNN
F 1 "0.1uF" H 6178 1255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 6000 1300 50  0001 C CNN
F 3 "~" H 6000 1300 50  0001 C CNN
	1    6000 1300
	1    0    0    -1  
$EndComp
Text GLabel 5200 1050 0    50   Input ~ 0
3v3
Wire Wire Line
	5200 1050 5400 1050
Text GLabel 5200 1550 0    50   Input ~ 0
GND
Wire Wire Line
	5200 1550 5400 1550
Wire Wire Line
	5400 1550 6000 1550
Connection ~ 5400 1550
Wire Wire Line
	5400 1050 6000 1050
Connection ~ 5400 1050
$Comp
L Connector_Generic:Conn_02x05_Odd_Even J1
U 1 1 5E0674B7
P 1050 1900
F 0 "J1" H 1100 2317 50  0000 C CNN
F 1 "Conn_02x05_Odd_Even" H 1100 2226 50  0000 C CNN
F 2 "Connector_PinHeader_1.27mm:PinHeader_2x05_P1.27mm_Vertical" H 1050 1900 50  0001 C CNN
F 3 "~" H 1050 1900 50  0001 C CNN
	1    1050 1900
	1    0    0    -1  
$EndComp
Wire Wire Line
	850  1800 750  1800
Wire Wire Line
	750  1800 750  1900
Wire Wire Line
	750  1900 850  1900
Wire Wire Line
	750  1900 750  2100
Wire Wire Line
	750  2100 850  2100
Connection ~ 750  1900
Wire Wire Line
	750  2100 750  2200
Connection ~ 750  2100
Text GLabel 700  2200 0    50   Input ~ 0
GND
Text GLabel 700  1700 0    50   Input ~ 0
3v3
Wire Wire Line
	700  1700 850  1700
Wire Wire Line
	700  2200 750  2200
Wire Wire Line
	1750 1950 1450 1950
Wire Wire Line
	1450 1950 1450 2100
Wire Wire Line
	1450 2100 1350 2100
NoConn ~ 850  2000
NoConn ~ 1350 1900
NoConn ~ 1350 2000
$Comp
L Device:R_Pack04 RN1
U 1 1 5E06945C
P 5800 2050
F 0 "RN1" H 5988 2096 50  0000 L CNN
F 1 "R_Pack04" H 5988 2005 50  0000 L CNN
F 2 "Resistor_SMD:R_Array_Concave_4x0603" V 6075 2050 50  0001 C CNN
F 3 "~" H 5800 2050 50  0001 C CNN
	1    5800 2050
	1    0    0    -1  
$EndComp
$Comp
L Device:LED_Small D1
U 1 1 5E069554
P 5300 2450
F 0 "D1" V 5346 2382 50  0000 R CNN
F 1 "Red" V 5255 2382 50  0000 R CNN
F 2 "Diode_SMD:D_0805_2012Metric" V 5300 2450 50  0001 C CNN
F 3 "~" V 5300 2450 50  0001 C CNN
	1    5300 2450
	0    -1   -1   0   
$EndComp
$Comp
L Device:LED_Small D2
U 1 1 5E069623
P 5600 2450
F 0 "D2" V 5646 2382 50  0000 R CNN
F 1 "Red" V 5555 2382 50  0000 R CNN
F 2 "Diode_SMD:D_0805_2012Metric" V 5600 2450 50  0001 C CNN
F 3 "~" V 5600 2450 50  0001 C CNN
	1    5600 2450
	0    -1   -1   0   
$EndComp
$Comp
L Device:LED_Small D3
U 1 1 5E069A1F
P 5900 2450
F 0 "D3" V 5946 2382 50  0000 R CNN
F 1 "Red" V 5855 2382 50  0000 R CNN
F 2 "Diode_SMD:D_0805_2012Metric" V 5900 2450 50  0001 C CNN
F 3 "~" V 5900 2450 50  0001 C CNN
	1    5900 2450
	0    -1   -1   0   
$EndComp
$Comp
L Device:LED_Small D4
U 1 1 5E069E1E
P 6200 2450
F 0 "D4" V 6246 2382 50  0000 R CNN
F 1 "Red" V 6155 2382 50  0000 R CNN
F 2 "Diode_SMD:D_0805_2012Metric" V 6200 2450 50  0001 C CNN
F 3 "~" V 6200 2450 50  0001 C CNN
	1    6200 2450
	0    -1   -1   0   
$EndComp
Wire Wire Line
	5300 2350 5300 2250
Wire Wire Line
	5300 2250 5600 2250
Wire Wire Line
	5900 2250 6200 2250
Wire Wire Line
	6200 2250 6200 2350
Wire Wire Line
	5700 2250 5700 2300
Wire Wire Line
	5700 2300 5600 2300
Wire Wire Line
	5600 2300 5600 2350
Wire Wire Line
	5800 2250 5800 2300
Wire Wire Line
	5800 2300 5900 2300
Wire Wire Line
	5900 2300 5900 2350
Text GLabel 5250 2650 0    50   Input ~ 0
LED0
Wire Wire Line
	5250 2650 5300 2650
Wire Wire Line
	5300 2650 5300 2550
Text GLabel 5550 2650 0    50   Input ~ 0
LED1
Wire Wire Line
	5550 2650 5600 2650
Wire Wire Line
	5600 2650 5600 2550
Text GLabel 5850 2650 0    50   Input ~ 0
LED2
Wire Wire Line
	5850 2650 5900 2650
Wire Wire Line
	5900 2650 5900 2550
Text GLabel 6150 2650 0    50   Input ~ 0
LED3
Wire Wire Line
	6150 2650 6200 2650
Wire Wire Line
	6200 2650 6200 2550
Text GLabel 5250 1850 0    50   Input ~ 0
3v3
Wire Wire Line
	5250 1850 5600 1850
Connection ~ 5600 1850
Wire Wire Line
	5600 1850 5700 1850
Connection ~ 5700 1850
Wire Wire Line
	5700 1850 5800 1850
Connection ~ 5800 1850
Wire Wire Line
	5800 1850 5900 1850
Text GLabel 1300 1350 0    50   Input ~ 0
LED0
Wire Wire Line
	1300 1350 1350 1350
Wire Wire Line
	1350 1350 1350 1450
Text GLabel 1300 1250 0    50   Input ~ 0
LED1
Text GLabel 1300 1150 0    50   Input ~ 0
LED2
Text GLabel 1300 1050 0    50   Input ~ 0
LED3
Wire Wire Line
	1350 1450 1600 1450
Wire Wire Line
	1600 1450 1600 1750
Wire Wire Line
	1600 1750 1750 1750
Wire Wire Line
	1550 1700 1550 2250
Wire Wire Line
	1550 1700 1350 1700
Wire Wire Line
	1550 2250 1750 2250
Wire Wire Line
	1600 1800 1600 2150
Wire Wire Line
	1600 1800 1350 1800
Wire Wire Line
	1600 2150 1750 2150
Wire Wire Line
	1300 1250 1400 1250
Wire Wire Line
	1400 1250 1400 1400
Wire Wire Line
	1400 1400 1650 1400
Wire Wire Line
	1650 1400 1650 1650
Wire Wire Line
	1650 1650 1750 1650
Wire Wire Line
	1300 1150 1450 1150
Wire Wire Line
	1450 1150 1450 1350
Wire Wire Line
	1450 1350 1700 1350
Wire Wire Line
	1700 1350 1700 1550
Wire Wire Line
	1700 1550 1750 1550
Wire Wire Line
	1500 1050 1500 1300
Wire Wire Line
	1500 1300 1750 1300
Wire Wire Line
	1750 1300 1750 1450
Wire Wire Line
	1300 1050 1500 1050
$Comp
L pspice:CAP C1
U 1 1 5E086955
P 1650 3400
F 0 "C1" V 1335 3400 50  0000 C CNN
F 1 "0.1uF" V 1426 3400 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 1650 3400 50  0001 C CNN
F 3 "~" H 1650 3400 50  0001 C CNN
	1    1650 3400
	0    1    1    0   
$EndComp
Text GLabel 1250 3400 0    50   Input ~ 0
CAPT_YL
Text GLabel 1250 3850 0    50   Input ~ 0
CAPT_HL
Wire Wire Line
	1250 3400 1400 3400
Wire Wire Line
	1250 3850 1900 3850
Wire Wire Line
	1900 3850 1900 3650
$Comp
L pspice:CAP C2
U 1 1 5E08C57A
P 2400 3150
F 0 "C2" H 2578 3196 50  0000 L CNN
F 1 "CAPT" H 2578 3105 50  0000 L CNN
F 2 "" H 2400 3150 50  0001 C CNN
F 3 "~" H 2400 3150 50  0001 C CNN
	1    2400 3150
	1    0    0    -1  
$EndComp
$Comp
L pspice:CAP C3
U 1 1 5E08C65B
P 3050 3150
F 0 "C3" H 3228 3196 50  0000 L CNN
F 1 "CAPT" H 3228 3105 50  0000 L CNN
F 2 "" H 3050 3150 50  0001 C CNN
F 3 "~" H 3050 3150 50  0001 C CNN
	1    3050 3150
	1    0    0    -1  
$EndComp
$Comp
L pspice:CAP C4
U 1 1 5E08DDC5
P 3650 3150
F 0 "C4" H 3828 3196 50  0000 L CNN
F 1 "CAPT" H 3828 3105 50  0000 L CNN
F 2 "" H 3650 3150 50  0001 C CNN
F 3 "~" H 3650 3150 50  0001 C CNN
	1    3650 3150
	1    0    0    -1  
$EndComp
$Comp
L pspice:CAP C5
U 1 1 5E08F526
P 4250 3150
F 0 "C5" H 4428 3196 50  0000 L CNN
F 1 "CAPT" H 4428 3105 50  0000 L CNN
F 2 "" H 4250 3150 50  0001 C CNN
F 3 "~" H 4250 3150 50  0001 C CNN
	1    4250 3150
	1    0    0    -1  
$EndComp
Wire Wire Line
	4250 3400 3650 3400
Connection ~ 1900 3400
Connection ~ 2400 3400
Wire Wire Line
	2400 3400 1900 3400
Connection ~ 3050 3400
Wire Wire Line
	3050 3400 2400 3400
Connection ~ 3650 3400
Wire Wire Line
	3650 3400 3050 3400
Text GLabel 2300 2850 0    50   Input ~ 0
CAPT_X0
Text GLabel 2950 2850 0    50   Input ~ 0
CAPT_X1
Text GLabel 3550 2850 0    50   Input ~ 0
CAPT_X2
Text GLabel 4150 2850 0    50   Input ~ 0
CAPT_X3
Wire Wire Line
	2300 2850 2400 2850
Wire Wire Line
	2400 2850 2400 2900
Wire Wire Line
	2950 2850 3050 2850
Wire Wire Line
	3050 2850 3050 2900
Wire Wire Line
	3550 2850 3650 2850
Wire Wire Line
	3650 2850 3650 2900
Wire Wire Line
	4150 2850 4250 2850
Wire Wire Line
	4250 2850 4250 2900
Text GLabel 1250 3650 0    50   Input ~ 0
ACMP
Wire Wire Line
	1250 3650 1900 3650
Connection ~ 1900 3650
Wire Wire Line
	1900 3650 1900 3400
Text GLabel 4350 1450 2    50   Input ~ 0
ACMP
Wire Wire Line
	4150 1450 4350 1450
Text GLabel 4350 1550 2    50   Input ~ 0
CAPT_YL
Wire Wire Line
	4350 1550 4150 1550
Text GLabel 4350 1650 2    50   Input ~ 0
CAPT_HL
Wire Wire Line
	4350 1650 4150 1650
Text GLabel 4350 1950 2    50   Input ~ 0
CAPT_X0
Wire Wire Line
	4350 1950 4150 1950
Text GLabel 4350 2050 2    50   Input ~ 0
CAPT_X1
Wire Wire Line
	4350 2050 4150 2050
Text GLabel 4350 2150 2    50   Input ~ 0
CAPT_X2
Wire Wire Line
	4350 2150 4150 2150
Text GLabel 4350 2250 2    50   Input ~ 0
CAPT_X3
Wire Wire Line
	4350 2250 4150 2250
Text Notes 2200 3650 0    50   ~ 0
Note: KiCAD does not have Cap Touch pad support.
$EndSCHEMATC
