EESchema Schematic File Version 4
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
L Device:Transformer_1P_1S T?
U 1 1 5DF1BF2D
P 2100 1250
F 0 "T?" H 2100 1628 50  0000 C CNN
F 1 "120 to 5" H 2100 1537 50  0000 C CNN
F 2 "" H 2100 1250 50  0001 C CNN
F 3 "~" H 2100 1250 50  0001 C CNN
	1    2100 1250
	1    0    0    -1  
$EndComp
$Comp
L Device:D_Zener D?
U 1 1 5DF1C116
P 3300 1250
F 0 "D?" V 3254 1329 50  0000 L CNN
F 1 "D_Zener" V 3345 1329 50  0000 L CNN
F 2 "" H 3300 1250 50  0001 C CNN
F 3 "~" H 3300 1250 50  0001 C CNN
	1    3300 1250
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small_US R?
U 1 1 5DF1C1DC
P 2850 1050
F 0 "R?" V 2645 1050 50  0000 C CNN
F 1 "R_Small_US" V 2736 1050 50  0000 C CNN
F 2 "" H 2850 1050 50  0001 C CNN
F 3 "~" H 2850 1050 50  0001 C CNN
	1    2850 1050
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small_US R?
U 1 1 5DF1C2BA
P 3750 1250
F 0 "R?" H 3682 1204 50  0000 R CNN
F 1 "R_Small_US" H 3682 1295 50  0000 R CNN
F 2 "" H 3750 1250 50  0001 C CNN
F 3 "~" H 3750 1250 50  0001 C CNN
	1    3750 1250
	-1   0    0    1   
$EndComp
$Comp
L Device:C_Small C?
U 1 1 5DF1C4C1
P 2650 1150
F 0 "C?" H 2742 1196 50  0000 L CNN
F 1 "C_Small" H 2742 1105 50  0000 L CNN
F 2 "" H 2650 1150 50  0001 C CNN
F 3 "~" H 2650 1150 50  0001 C CNN
	1    2650 1150
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small_US R?
U 1 1 5DF1C5AB
P 2650 1350
F 0 "R?" H 2500 1300 50  0000 C CNN
F 1 "R_Small_US" H 2350 1400 50  0000 C CNN
F 2 "" H 2650 1350 50  0001 C CNN
F 3 "~" H 2650 1350 50  0001 C CNN
	1    2650 1350
	-1   0    0    1   
$EndComp
Wire Wire Line
	2500 1050 2650 1050
Wire Wire Line
	2650 1050 2750 1050
Connection ~ 2650 1050
Wire Wire Line
	2950 1050 3300 1050
Wire Wire Line
	3300 1050 3300 1100
Wire Wire Line
	3300 1050 3750 1050
Wire Wire Line
	3750 1050 3750 1150
Connection ~ 3300 1050
Wire Wire Line
	2500 1450 2650 1450
Wire Wire Line
	2650 1450 3300 1450
Wire Wire Line
	3300 1450 3300 1400
Connection ~ 2650 1450
Wire Wire Line
	3300 1450 3750 1450
Wire Wire Line
	3750 1450 3750 1350
Connection ~ 3300 1450
$Comp
L Connector:Conn_WallPlug P?
U 1 1 5DF1CC0A
P 1300 1250
F 0 "P?" H 1315 1575 50  0000 C CNN
F 1 "Conn_WallPlug" H 1315 1484 50  0000 C CNN
F 2 "" H 1700 1250 50  0001 C CNN
F 3 "~" H 1700 1250 50  0001 C CNN
	1    1300 1250
	1    0    0    -1  
$EndComp
Wire Wire Line
	1500 1150 1650 1150
Wire Wire Line
	1650 1150 1650 1050
Wire Wire Line
	1650 1050 1700 1050
Wire Wire Line
	1500 1350 1650 1350
Wire Wire Line
	1650 1350 1650 1450
Wire Wire Line
	1650 1450 1700 1450
$Comp
L MCU_Microchip_PIC18:PIC18F45K50_QFP U?
U 1 1 5DF1D514
P 8150 2300
F 0 "U?" H 8150 3878 50  0000 C CNN
F 1 "PIC18F45K50_QFP" H 8150 3787 50  0000 C CNN
F 2 "Package_QFP:TQFP-44_10x10mm_P0.8mm" H 8150 2300 50  0001 C CIN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/30000684B.pdf" H 8150 2000 50  0001 C CNN
	1    8150 2300
	1    0    0    -1  
$EndComp
$Comp
L Device:D_Bridge_+-AA D?
U 1 1 5DF1D760
P 1800 2000
F 0 "D?" H 2141 2046 50  0000 L CNN
F 1 "D_Bridge_+-AA" H 2141 1955 50  0000 L CNN
F 2 "" H 1800 2000 50  0001 C CNN
F 3 "~" H 1800 2000 50  0001 C CNN
	1    1800 2000
	1    0    0    -1  
$EndComp
$Comp
L Regulator_Linear:AP2204R-3.3 U?
U 1 1 5DF1DA4A
P 3450 2100
F 0 "U?" H 3450 2342 50  0000 C CNN
F 1 "AP2204R-3.3" H 3450 2251 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-89-3" H 3450 2325 50  0001 C CNN
F 3 "https://www.diodes.com/assets/Datasheets/AP2204.pdf" H 3450 2100 50  0001 C CNN
	1    3450 2100
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C?
U 1 1 5DF1DC9A
P 2800 2250
F 0 "C?" H 2892 2296 50  0000 L CNN
F 1 "C_Small" H 2892 2205 50  0000 L CNN
F 2 "" H 2800 2250 50  0001 C CNN
F 3 "~" H 2800 2250 50  0001 C CNN
	1    2800 2250
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C?
U 1 1 5DF1DDEE
P 3900 2250
F 0 "C?" H 3992 2296 50  0000 L CNN
F 1 "C_Small" H 3992 2205 50  0000 L CNN
F 2 "" H 3900 2250 50  0001 C CNN
F 3 "~" H 3900 2250 50  0001 C CNN
	1    3900 2250
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74HC596 U?
U 1 1 5DF1EB34
P 1500 3650
F 0 "U?" H 1500 4428 50  0000 C CNN
F 1 "74HC596" H 1500 4337 50  0000 C CNN
F 2 "" H 1500 3650 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/74HC_HCT595.pdf" H 1500 3650 50  0001 C CNN
	1    1500 3650
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74HC596 U?
U 1 1 5DF1FA1D
P 3000 3650
F 0 "U?" H 3000 4428 50  0000 C CNN
F 1 "74HC596" H 3000 4337 50  0000 C CNN
F 2 "" H 3000 3650 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/74HC_HCT595.pdf" H 3000 3650 50  0001 C CNN
	1    3000 3650
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74HC596 U?
U 1 1 5DF1FC38
P 4350 3650
F 0 "U?" H 4350 4428 50  0000 C CNN
F 1 "74HC596" H 4350 4337 50  0000 C CNN
F 2 "" H 4350 3650 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/74HC_HCT595.pdf" H 4350 3650 50  0001 C CNN
	1    4350 3650
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74HC596 U?
U 1 1 5DF1FC3F
P 4350 6900
F 0 "U?" H 4350 7678 50  0000 C CNN
F 1 "74HC596" H 4350 7587 50  0000 C CNN
F 2 "" H 4350 6900 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/74HC_HCT595.pdf" H 4350 6900 50  0001 C CNN
	1    4350 6900
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74HC596 U?
U 1 1 5DF1FEAA
P 1500 5250
F 0 "U?" H 1500 6028 50  0000 C CNN
F 1 "74HC596" H 1500 5937 50  0000 C CNN
F 2 "" H 1500 5250 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/74HC_HCT595.pdf" H 1500 5250 50  0001 C CNN
	1    1500 5250
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74HC596 U?
U 1 1 5DF1FEB1
P 3000 5250
F 0 "U?" H 3000 6028 50  0000 C CNN
F 1 "74HC596" H 3000 5937 50  0000 C CNN
F 2 "" H 3000 5250 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/74HC_HCT595.pdf" H 3000 5250 50  0001 C CNN
	1    3000 5250
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74HC596 U?
U 1 1 5DF1FEB8
P 4350 5250
F 0 "U?" H 4350 6028 50  0000 C CNN
F 1 "74HC596" H 4350 5937 50  0000 C CNN
F 2 "" H 4350 5250 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/74HC_HCT595.pdf" H 4350 5250 50  0001 C CNN
	1    4350 5250
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74HC596 U?
U 1 1 5DF1FEBF
P 3000 6900
F 0 "U?" H 3000 7678 50  0000 C CNN
F 1 "74HC596" H 3000 7587 50  0000 C CNN
F 2 "" H 3000 6900 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/74HC_HCT595.pdf" H 3000 6900 50  0001 C CNN
	1    3000 6900
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74HC596 U?
U 1 1 5DF200C8
P 1500 6900
F 0 "U?" H 1500 7678 50  0000 C CNN
F 1 "74HC596" H 1500 7587 50  0000 C CNN
F 2 "" H 1500 6900 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/74HC_HCT595.pdf" H 1500 6900 50  0001 C CNN
	1    1500 6900
	1    0    0    -1  
$EndComp
Text Notes 3850 800  0    50   ~ 0
Clock
Text Notes 3950 1850 0    50   ~ 0
Regulated Power
Text Notes 3250 2700 0    50   ~ 0
Shift Register (Add LEDs)
Text Notes 8900 800  0    50   ~ 0
Almost the correct processor
$EndSCHEMATC
