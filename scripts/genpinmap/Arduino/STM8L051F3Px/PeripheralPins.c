/*
 *******************************************************************************
 * Copyright (c) 2018, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 * Automatically generated from STM8L051F3Px.xml
 */
#include "Arduino.h"
#include "PeripheralPins.h"

/* =====
 * Note: Commented lines are alternative possibilities which are not used per default.
 *       If you change them, you will have to know what you do
 * =====
 */

//*** ADC ***

#if !defined(NO_HWADC)
const PinMap PinMap_ADC[] = {
    {PB_0,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_Mode_In_FL_No_IT, 0, 18, 0)}, // ADC1_IN18
    {PB_1,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_Mode_In_FL_No_IT, 0, 17, 0)}, // ADC1_IN17
    {PB_2,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_Mode_In_FL_No_IT, 0, 16, 0)}, // ADC1_IN16
    {PB_3,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_Mode_In_FL_No_IT, 0, 15, 0)}, // ADC1_IN15
    {PB_4,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_Mode_In_FL_No_IT, 0, 14, 0)}, // ADC1_IN14
    {PB_5,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_Mode_In_FL_No_IT, 0, 13, 0)}, // ADC1_IN13
    {PB_6,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_Mode_In_FL_No_IT, 0, 12, 0)}, // ADC1_IN12
    {PB_7,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_Mode_In_FL_No_IT, 0, 11, 0)}, // ADC1_IN11
    {PC_4,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_Mode_In_FL_No_IT, 0, 4, 0)}, // ADC1_IN4
    {PD_0,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_Mode_In_FL_No_IT, 0, 22, 0)}, // ADC1_IN22
    {NC,    NP,    0}
};
#endif

//*** DAC ***

//*** No DAC ***

//*** I2C ***

#if !defined(NO_HWI2C)
const PinMap PinMap_I2C_SDA[] = {
    {PC_0,  I2C, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_Mode_In_FL_No_IT, AFIO_NONE)},
    {NC,    NP,    0}
};
#endif

#if !defined(NO_HWI2C)
const PinMap PinMap_I2C_SCL[] = {
    {PC_1,  I2C, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_Mode_In_FL_No_IT, AFIO_NONE)},
    {NC,    NP,    0}
};
#endif

//*** PWM ***

#if !defined(NO_HWTIM)
const PinMap PinMap_PWM[] = {
    {PB_0,  TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_Mode_Out_PP_Low_Fast, AFIO_NONE, 1, 0)},  // TIM2_CH1
    {PB_1,  TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_Mode_Out_PP_Low_Fast, AFIO_NONE, 1, 0)},  // TIM3_CH1
    {PB_2,  TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_Mode_Out_PP_Low_Fast, AFIO_NONE, 2, 0)},  // TIM2_CH2
    {PC_5,  TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_Mode_Out_PP_Low_Fast, AFIO_NONE, 1, 0)},  // TIM2_CH1
    {PC_6,  TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_Mode_Out_PP_Low_Fast, AFIO_NONE, 2, 0)},  // TIM2_CH2
    {PD_0,  TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_Mode_Out_PP_Low_Fast, AFIO_NONE, 2, 0)},  // TIM3_CH2
    {NC,    NP,    0}
};
#endif

//*** SERIAL ***

#if !defined(NO_HWSERIAL)
const PinMap PinMap_UART_TX[] = {
    {PA_2,  USART,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_Mode_Out_PP_Low_Fast, AFIO_USART1_PORTA_ENABLE)},
    {PC_5,  USART,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_Mode_Out_PP_Low_Fast, AFIO_USART1_PORTC_ENABLE)},
    {NC,    NP,    0}
};
#endif

#if !defined(NO_HWSERIAL)
const PinMap PinMap_UART_RX[] = {
    {PA_3,  USART,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_Mode_In_PU_No_IT, AFIO_USART1_PORTA_ENABLE)},
    {PA_3,  USART,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_Mode_In_PU_No_IT, AFIO_USART1ENABLE)},
    {PC_6,  USART,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_Mode_In_PU_No_IT, AFIO_USART1_PORTC_ENABLE)},
    {NC,    NP,    0}
};
#endif

//*** SPI ***

#if !defined(NO_HWSPI)
const PinMap PinMap_SPI_MOSI[] = {
    {PA_3,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_Mode_In_PU_No_IT, AFIO_SPI1_FULL_ENABLE)},
    {PA_3,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_Mode_In_PU_No_IT, AFIO_SPI1ENABLE)},
    {PB_6,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_Mode_In_PU_No_IT, AFIO_NONE)},
    {NC,    NP,    0}
};
#endif

#if !defined(NO_HWSPI)
const PinMap PinMap_SPI_MISO[] = {
    {PA_2,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_Mode_In_PU_No_IT, AFIO_SPI1_FULL_ENABLE)},
    {PB_7,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_Mode_In_PU_No_IT, AFIO_NONE)},
    {NC,    NP,    0}
};
#endif

#if !defined(NO_HWSPI)
const PinMap PinMap_SPI_SCLK[] = {
    {PB_5,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_Mode_In_PU_No_IT, AFIO_NONE)},
    {PC_6,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_Mode_In_PU_No_IT, AFIO_SPI1_FULL_ENABLE)},
    {NC,    NP,    0}
};
#endif

#if !defined(NO_HWSPI)
const PinMap PinMap_SPI_SSEL[] = {
    {PB_4,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_Mode_In_PU_No_IT, AFIO_NONE)},
    {PC_5,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_Mode_In_PU_No_IT, AFIO_SPI1_FULL_ENABLE)},
    {NC,    NP,    0}
};
#endif

//*** CAN ***

//*** No CAN_RD ***

//*** No CAN_TD ***

//*** QUADSPI ***

//*** No QUADSPI ***
