/*
 * Copyright 2017-2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_clock.h"
#include "rom_api.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.clock"
#endif

/* External clock rate.
 * Either external clk in rate or system oscillator frequency.
 */
volatile uint32_t g_Ext_Clk_Freq = 0U;
/** Lower power oscillator rate in Hz.*/
volatile uint32_t g_LP_Osc_Freq = 1000000U;
/** Fro oscillator rate in Hz */
volatile uint32_t g_Fro_Osc_Freq = 0U;

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*
 * @brief   Get FRG input clock frequency.
 * @param fractional clock register base address.
 * @return  input clock frequency.
 */
static uint32_t CLOCK_GetFRGInputClkFreq(volatile uint32_t *base);

/*
 * @brief Update clock source.
 * @param base clock register base address.
 * @param mask clock source update enable bit mask value.
 */
static void CLOCK_UpdateClkSrc(volatile uint32_t *base, uint32_t mask);

/*******************************************************************************
 * Code
 ******************************************************************************/
static uint32_t CLOCK_GetFRGInputClkFreq(volatile uint32_t *base)
{
    uint32_t sel = CLK_FRG_SEL_REG_MAP(base) & SYSCON_FRG_FRGCLKSEL_SEL_MASK;

    if (sel == 0U)
    {
        return CLOCK_GetFroFreq();
    }
    else if (sel == 1U)
    {
        return CLOCK_GetMainClkFreq();
    }
    else
    {
        return 0;
    }
}

static bool CLOCK_SetFRGClkFreq(volatile uint32_t *base, uint32_t freq)
{
    assert(freq);

    uint32_t input = CLOCK_GetFRGInputClkFreq(base);
    uint32_t mul;

    if ((freq > input) || (input / freq >= 2U))
    {
        return false;
    }

    mul = ((uint64_t)(input - freq) << 8U) / ((uint64_t)freq);

    CLK_FRG_DIV_REG_MAP(base) = SYSCON_FRG_FRGDIV_DIV_MASK;
    CLK_FRG_MUL_REG_MAP(base) = SYSCON_FRG_FRGMULT_MULT(mul);

    return true;
}

static void CLOCK_UpdateClkSrc(volatile uint32_t *base, uint32_t mask)
{
    assert(base);

    *base &= ~mask;
    *base |= mask;
    while ((*base & mask) == 0U)
    {
    }
}

/*! brief Set FRG0 output frequency.
 * param freq, target output frequency,freq < input and (input / freq) < 2 should be satisfy.
 * retval true - successfully, false - input argument is invalid.
 *
 */
bool CLOCK_SetFRG0ClkFreq(uint32_t freq)
{
    return CLOCK_SetFRGClkFreq(((volatile uint32_t *)(&SYSCON->FRG[0].FRGDIV)), freq);
}

/*! brief  Return Frequency of FRG0 Clock.
 *  return Frequency of FRG0 Clock.
 */
uint32_t CLOCK_GetFRG0ClkFreq(void)
{
    return ((uint64_t)(CLOCK_GetFRGInputClkFreq((volatile uint32_t *)(&SYSCON->FRG[0].FRGDIV)) << 8U)) /
           ((SYSCON->FRG[0].FRGMULT & SYSCON_FRG_FRGMULT_MULT_MASK) + 256U);
}

/*! brief  Return Frequency of Main Clock.
 *  return Frequency of Main Clock.
 */
uint32_t CLOCK_GetMainClkFreq(void)
{
    uint32_t freq = 0U;

    switch (SYSCON->MAINCLKSEL)
    {
        case 0U:
            freq = CLOCK_GetFroFreq();
            break;

        case 1U:
            freq = CLOCK_GetExtClkFreq();
            break;

        case 2U:
            freq = CLOCK_GetLPOscFreq();
            break;

        case 3U:
            freq = CLOCK_GetFroFreq() >> 1U;
            break;
        default:
            break;
    }

    return freq;
}

/*! brief  Return Frequency of FRO.
 *  return Frequency of FRO.
 */
uint32_t CLOCK_GetFroFreq(void)
{
    return g_Fro_Osc_Freq / 2;
}

/*! brief  Return Frequency of ClockOut
 *  return Frequency of ClockOut
 */
uint32_t CLOCK_GetClockOutClkFreq(void)
{
    uint32_t divider = SYSCON->CLKOUTDIV & 0xffU, freq = 0U;

    switch (SYSCON->CLKOUTSEL)
    {
        case 0U:
            freq = CLOCK_GetFroFreq();
            break;

        case 1U:
            freq = CLOCK_GetMainClkFreq();
            break;

        case 3U:
            freq = CLOCK_GetExtClkFreq();
            break;

        case 4U:
            freq = CLOCK_GetLPOscFreq();
            break;

        default:
            break;
    }

    return divider == 0U ? 0U : (freq / divider);
}

/*! brief  Return Frequency of UART0
 *  return Frequency of UART0
 */
uint32_t CLOCK_GetUart0ClkFreq(void)
{
    uint32_t freq = 0U;

    switch (SYSCON->UART0CLKSEL)
    {
        case 0U:
            freq = CLOCK_GetFroFreq();
            break;
        case 1U:
            freq = CLOCK_GetMainClkFreq();
            break;
        case 2U:
            freq = CLOCK_GetFRG0ClkFreq();
            break;
        case 4U:
            freq = CLOCK_GetFroFreq() >> 1U;
            break;

        default:
            break;
    }

    return freq;
}

/*! brief  Return Frequency of UART1
 *  return Frequency of UART1
 */
uint32_t CLOCK_GetUart1ClkFreq(void)
{
    uint32_t freq = 0U;

    switch (SYSCON->UART1CLKSEL)
    {
        case 0U:
            freq = CLOCK_GetFroFreq();
            break;
        case 1U:
            freq = CLOCK_GetMainClkFreq();
            break;
        case 2U:
            freq = CLOCK_GetFRG0ClkFreq();
            break;
        case 4U:
            freq = CLOCK_GetFroFreq() >> 1U;
            break;

        default:
            break;
    }

    return freq;
}

/*! brief	Return Frequency of selected clock
 *  return	Frequency of selected clock
 */
uint32_t CLOCK_GetFreq(clock_name_t clockName)
{
    uint32_t freq;

    switch (clockName)
    {
        case kCLOCK_CoreSysClk:
            freq = CLOCK_GetCoreSysClkFreq();
            break;
        case kCLOCK_MainClk:
            freq = CLOCK_GetMainClkFreq();
            break;
        case kCLOCK_Fro:
            freq = CLOCK_GetFroFreq();
            break;
        case kCLOCK_FroDiv:
            freq = CLOCK_GetFroFreq() >> 1U;
            break;
        case kCLOCK_ExtClk:
            freq = CLOCK_GetExtClkFreq();
            break;
        case kCLOCK_LPOsc:
            freq = CLOCK_GetLPOscFreq();
            break;
        case kCLOCK_Frg0:
            freq = CLOCK_GetFRG0ClkFreq();
            break;

        default:
            freq = 0U;
            break;
    }

    return freq;
}

/*! brief  Init external CLK IN, select the CLKIN as the external clock source.
 * param clkInFreq external clock in frequency.
 */
void CLOCK_InitExtClkin(uint32_t clkInFreq)
{
    /* remove the pull up and pull down resistors in the IOCON */
    IOCON->PIO[IOCON_INDEX_PIO0_1] &= ~IOCON_PIO_MODE_MASK;
    /* enable the 1 bit functions for CLKIN */
    SWM0->PINENABLE0 &= ~SWM_PINENABLE0_CLKIN_MASK;
    /* record the external clock rate */
    g_Ext_Clk_Freq = clkInFreq;
}

/*! brief  Set main clock reference source.
 * param src, reference clock_main_clk_src_t to set the main clock source.
 */
void CLOCK_SetMainClkSrc(clock_main_clk_src_t src)
{
    uint32_t mainPreMux = CLK_MAIN_CLK_MUX_GET_PRE_MUX(src);

    SYSCON->MAINCLKSEL = (SYSCON->MAINCLKSEL & (~SYSCON_MAINCLKSEL_SEL_MASK)) | SYSCON_MAINCLKSEL_SEL(mainPreMux);
    CLOCK_UpdateClkSrc((volatile uint32_t *)(&(SYSCON->MAINCLKUEN)), SYSCON_MAINCLKUEN_ENA_MASK);
}

/*! brief Set FRO oscillator output frequency.
 *  Initialize the FRO clock to given frequency (18, 24 or 30 MHz).
 * param freq, please reference clock_fro_osc_freq_t definition, frequency must be one of 18000, 24000 or 30000 KHz.
 *
 */
void CLOCK_SetFroOscFreq(clock_fro_osc_freq_t freq)
{
    g_Fro_Osc_Freq = freq * 1000;
    LPC_PWRD_API->set_fro_frequency(freq);
}

/*!
 * brief Delay at least for several microseconds.
 * Please note that, this API will calculate the microsecond period with the maximum devices
 * supported CPU frequency, so this API will only delay for at least the given microseconds, if precise
 * delay count was needed, please implement a new timer count to achieve this function.
 *
 * param delay_us  Delay time in unit of microsecond.
 */
__attribute__((weak)) void SDK_DelayAtLeastUs(uint32_t delay_us)
{
    assert(0U != delay_us);

    uint32_t count = (uint32_t)USEC_TO_COUNT(delay_us, SDK_DEVICE_MAXIMUM_CPU_CLOCK_FREQUENCY);

    /*
     * Calculate the real delay count depend on the excute instructions cycles,
     * users can change the divider value to adapt to the real IDE optimise level.
     */
    count = (count / 4U);

    for (; count > 0UL; count--)
    {
        __NOP();
    }
}
