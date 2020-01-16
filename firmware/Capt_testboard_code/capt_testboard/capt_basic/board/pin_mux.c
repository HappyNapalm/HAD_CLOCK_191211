/*
 * Copyright  2018 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v4.1
processor: LPC804
package_id: LPC804M101JDH24
mcu_data: ksdk2_0
processor_version: 0.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_iocon.h"
#include "fsl_swm.h"
#include "pin_mux.h"

//To compile this for the test board you will need the following #define
#define HOMEBREW 1

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '22', peripheral: USART0, signal: RXD, pin_signal: PIO0_0/ACMP_I1}
  - {pin_num: '7', peripheral: USART0, signal: TXD, pin_signal: PIO0_4/ADC_11}
  - {pin_num: '5', peripheral: CAPT, signal: 'CAPTX, 0', pin_signal: PIO0_12, mode: inactive, invert: disabled, hysteresis: enabled, opendrain: disabled}
  - {pin_num: '12', peripheral: CAPT, signal: 'CAPTX, 1', pin_signal: PIO0_21/ACMP_I5, mode: inactive, invert: disabled, hysteresis: enabled, opendrain: disabled}
  - {pin_num: '4', peripheral: CAPT, signal: 'CAPTX, 2', pin_signal: PIO0_13/ADC_10, mode: inactive, invert: disabled, hysteresis: enabled, opendrain: disabled}
  - {pin_num: '10', peripheral: CAPT, signal: 'CAPTX, 3', pin_signal: PIO0_11/ADC_6/WKTCLKIN, mode: inactive, invert: disabled, hysteresis: enabled, opendrain: disabled}
  - {pin_num: '24', peripheral: CAPT, signal: 'CAPTX, 4', pin_signal: PIO0_19/DACOUT, mode: inactive, invert: disabled, hysteresis: enabled, opendrain: disabled,
    dacmode: disabled}
  - {pin_num: '3', peripheral: CAPT, signal: CAPTYH, pin_signal: PIO0_17/ADC_9, mode: inactive, invert: disabled, hysteresis: enabled, opendrain: disabled}
  - {pin_num: '20', peripheral: CAPT, signal: CAPTYL, pin_signal: PIO0_7/ADC_1/ACMPVREF, mode: inactive, invert: disabled, hysteresis: enabled, opendrain: disabled}
  - {pin_num: '13', peripheral: GPIO, signal: 'PIO0, 20', pin_signal: PIO0_20, mode: inactive, invert: disabled, hysteresis: enabled, opendrain: disabled}
  - {pin_num: '1', peripheral: GPIO, signal: 'PIO0, 18', pin_signal: PIO0_18, mode: inactive, invert: disabled, hysteresis: enabled, opendrain: disabled}
  - {pin_num: '14', peripheral: GPIO, signal: 'PIO0, 15', pin_signal: PIO0_15/ADC_8, mode: inactive, invert: disabled, hysteresis: enabled, opendrain: disabled}
  - {pin_num: '17', peripheral: GPIO, signal: 'PIO0, 8', pin_signal: PIO0_8/ADC_5, mode: inactive, invert: disabled, hysteresis: enabled, opendrain: disabled}
  - {pin_num: '16', peripheral: GPIO, signal: 'PIO0, 9', pin_signal: PIO0_9/ADC_4, mode: inactive, invert: disabled, hysteresis: enabled, opendrain: disabled}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M0P */
void BOARD_InitPins(void)
{
    /* Enables clock for IOCON.: enable */
    CLOCK_EnableClock(kCLOCK_Iocon);
    /* Enables clock for switch matrix.: enable */
    CLOCK_EnableClock(kCLOCK_Swm);
    /* This is the point that you need to play with. Use the definitions below to reassign the for the demo board */
    #if !HOMEBREW
        const uint32_t IOCON_INDEX_PIO0_17_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI);
        /* PORT0 PIN (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_17, IOCON_INDEX_PIO0_17_config);

        const uint32_t IOCON_INDEX_PIO0_13_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI);
        /* PORT1 PIN (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_13, IOCON_INDEX_PIO0_13_config);

        const uint32_t IOCON_INDEX_PIO0_15_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI);
        /* PORT1 PIN0 (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_15, IOCON_INDEX_PIO0_15_config);

        const uint32_t IOCON_INDEX_PIO0_21_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI);
        /* PORT1 PIN2 (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_21, IOCON_INDEX_PIO0_21_config);

        const uint32_t IOCON_INDEX_PIO0_9_config = (/* No addition pin function */
                                                    IOCON_PIO_MODE_INACT |
                                                    /* Enable hysteresis */
                                                    IOCON_PIO_HYS_EN |
                                                    /* Input not invert */
                                                    IOCON_PIO_INV_DI |
                                                    /* Disables Open-drain function */
                                                    IOCON_PIO_OD_DI);
        /* PORT1 PIN3 (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_9, IOCON_INDEX_PIO0_9_config);

        const uint32_t IOCON_INDEX_PIO0_8_config = (/* No addition pin function */
                                                    IOCON_PIO_MODE_INACT |
                                                    /* Enable hysteresis */
                                                    IOCON_PIO_HYS_EN |
                                                    /* Input not invert */
                                                    IOCON_PIO_INV_DI |
                                                    /* Disables Open-drain function */
                                                    IOCON_PIO_OD_DI);
        /* PORT1 PIN4 (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_8, IOCON_INDEX_PIO0_8_config);

        const uint32_t IOCON_INDEX_PIO0_7_config = (/* No addition pin function */
                                                    IOCON_PIO_MODE_INACT |
                                                    /* Enable hysteresis */
                                                    IOCON_PIO_HYS_EN |
                                                    /* Input not invert */
                                                    IOCON_PIO_INV_DI |
                                                    /* Disables Open-drain function */
                                                    IOCON_PIO_OD_DI);
        /* PORT1 PIN5 (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_7, IOCON_INDEX_PIO0_7_config);

        const uint32_t IOCON_INDEX_PIO0_12_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI);
        /* PORT2 PIN (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_12, IOCON_INDEX_PIO0_12_config);

        const uint32_t IOCON_INDEX_PIO0_20_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI);
        /* PORT2 PIN2 (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_20, IOCON_INDEX_PIO0_20_config);

        const uint32_t IOCON_INDEX_PIO0_19_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI |
                                                     /* Disables DAC mode */
                                                     IOCON_PIO_DACMODE_DI);
        /* PORT2 PIN4 (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_19, IOCON_INDEX_PIO0_19_config);

        const uint32_t IOCON_INDEX_PIO0_18_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI);
        /* PORT2 PIN9 (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_18, IOCON_INDEX_PIO0_18_config);

        const uint32_t IOCON_INDEX_PIO0_11_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI);
        /* PORT7 PIN (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_11, IOCON_INDEX_PIO0_11_config);

        /* USART0_TXD connect to P0_4 */
        SWM_SetMovablePinSelect(SWM0, kSWM_USART0_TXD, kSWM_PortPin_P0_4);

        /* USART0_RXD connect to P0_0 */
        SWM_SetMovablePinSelect(SWM0, kSWM_USART0_RXD, kSWM_PortPin_P0_0);

        /* CAPT_X0 connect to P0_12 */
        SWM_SetMovablePinSelect(SWM0, kSWM_CAPT_X0, kSWM_PortPin_P0_12);

        /* CAPT_X1 connect to P0_21 */
        SWM_SetMovablePinSelect(SWM0, kSWM_CAPT_X1, kSWM_PortPin_P0_21);

        /* CAPT_X2 connect to P0_13 */
        SWM_SetMovablePinSelect(SWM0, kSWM_CAPT_X2, kSWM_PortPin_P0_13);

        /* CAPT_X3 connect to P0_11 */
        SWM_SetMovablePinSelect(SWM0, kSWM_CAPT_X3, kSWM_PortPin_P0_11);

        /* CAPT_X4 connect to P0_19 */
        SWM_SetMovablePinSelect(SWM0, kSWM_CAPT_X4, kSWM_PortPin_P0_19);

        /* CAPT_YL connect to P0_7 */
        SWM_SetMovablePinSelect(SWM0, kSWM_CAPT_YL, kSWM_PortPin_P0_7);

        /* CAPT_YH connect to P0_17 */
        SWM_SetMovablePinSelect(SWM0, kSWM_CAPT_YH, kSWM_PortPin_P0_17);
    #else 
        const uint32_t IOCON_INDEX_PIO0_17_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI);
        /* PORT0 PIN (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_17, IOCON_INDEX_PIO0_17_config);

        const uint32_t IOCON_INDEX_PIO0_13_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI);
        /* PORT1 PIN (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_13, IOCON_INDEX_PIO0_13_config);

        const uint32_t IOCON_INDEX_PIO0_15_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI);
        /* PORT1 PIN0 (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_15, IOCON_INDEX_PIO0_15_config);

        const uint32_t IOCON_INDEX_PIO0_21_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI);
        /* PORT1 PIN2 (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_21, IOCON_INDEX_PIO0_21_config);

        const uint32_t IOCON_INDEX_PIO0_9_config = (/* No addition pin function */
                                                    IOCON_PIO_MODE_INACT |
                                                    /* Enable hysteresis */
                                                    IOCON_PIO_HYS_EN |
                                                    /* Input not invert */
                                                    IOCON_PIO_INV_DI |
                                                    /* Disables Open-drain function */
                                                    IOCON_PIO_OD_DI);
        /* PORT1 PIN3 (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_9, IOCON_INDEX_PIO0_9_config);

        const uint32_t IOCON_INDEX_PIO0_8_config = (/* No addition pin function */
                                                    IOCON_PIO_MODE_INACT |
                                                    /* Enable hysteresis */
                                                    IOCON_PIO_HYS_EN |
                                                    /* Input not invert */
                                                    IOCON_PIO_INV_DI |
                                                    /* Disables Open-drain function */
                                                    IOCON_PIO_OD_DI);
        /* PORT1 PIN4 (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_8, IOCON_INDEX_PIO0_8_config);

        const uint32_t IOCON_INDEX_PIO0_7_config = (/* No addition pin function */
                                                    IOCON_PIO_MODE_INACT |
                                                    /* Enable hysteresis */
                                                    IOCON_PIO_HYS_EN |
                                                    /* Input not invert */
                                                    IOCON_PIO_INV_DI |
                                                    /* Disables Open-drain function */
                                                    IOCON_PIO_OD_DI);
        /* PORT1 PIN5 (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_7, IOCON_INDEX_PIO0_7_config);

        const uint32_t IOCON_INDEX_PIO0_12_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI);
        /* PORT2 PIN (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_12, IOCON_INDEX_PIO0_12_config);

        const uint32_t IOCON_INDEX_PIO0_20_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI);
        /* PORT2 PIN2 (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_20, IOCON_INDEX_PIO0_20_config);

        const uint32_t IOCON_INDEX_PIO0_19_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI |
                                                     /* Disables DAC mode */
                                                     IOCON_PIO_DACMODE_DI);
        /* PORT2 PIN4 (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_19, IOCON_INDEX_PIO0_19_config);

        const uint32_t IOCON_INDEX_PIO0_18_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI);
        /* PORT2 PIN9 (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_18, IOCON_INDEX_PIO0_18_config);

        const uint32_t IOCON_INDEX_PIO0_11_config = (/* No addition pin function */
                                                     IOCON_PIO_MODE_INACT |
                                                     /* Enable hysteresis */
                                                     IOCON_PIO_HYS_EN |
                                                     /* Input not invert */
                                                     IOCON_PIO_INV_DI |
                                                     /* Disables Open-drain function */
                                                     IOCON_PIO_OD_DI);
        /* PORT7 PIN (coords: ) is configured as  */
        IOCON_PinMuxSet(IOCON, IOCON_INDEX_PIO0_11, IOCON_INDEX_PIO0_11_config);

        /* USART0_TXD connect to P0_4 */
        SWM_SetMovablePinSelect(SWM0, kSWM_USART0_TXD, kSWM_PortPin_P0_4);

        /* USART0_RXD connect to P0_0 */
        SWM_SetMovablePinSelect(SWM0, kSWM_USART0_RXD, kSWM_PortPin_P0_0);

        /* CAPT_X0 connect to P0_12 */
        SWM_SetMovablePinSelect(SWM0, kSWM_CAPT_X0, kSWM_PortPin_P0_12);

        /* CAPT_X1 connect to P0_21 */
        SWM_SetMovablePinSelect(SWM0, kSWM_CAPT_X1, kSWM_PortPin_P0_21);

        /* CAPT_X2 connect to P0_13 */
        SWM_SetMovablePinSelect(SWM0, kSWM_CAPT_X2, kSWM_PortPin_P0_13);

        /* CAPT_X3 connect to P0_11 */
        SWM_SetMovablePinSelect(SWM0, kSWM_CAPT_X3, kSWM_PortPin_P0_11);

        /* CAPT_X4 connect to P0_19 */
        SWM_SetMovablePinSelect(SWM0, kSWM_CAPT_X4, kSWM_PortPin_P0_19);

        /* CAPT_YL connect to P0_7 */
        SWM_SetMovablePinSelect(SWM0, kSWM_CAPT_YL, kSWM_PortPin_P0_7);

        /* CAPT_YH connect to P0_17 */
        SWM_SetMovablePinSelect(SWM0, kSWM_CAPT_YH, kSWM_PortPin_P0_17);
    #endif
    /* Disable clock for switch matrix. */
    CLOCK_DisableClock(kCLOCK_Swm);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
