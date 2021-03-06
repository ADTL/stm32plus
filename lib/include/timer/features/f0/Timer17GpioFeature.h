/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 *
 * THIS IS AN AUTOMATICALLY GENERATED FILE - DO NOT EDIT!
 */

#pragma once

// ensure the MCU series is correct
#ifndef STM32PLUS_F0
#error This class can only be used with the STM32F0 series
#endif

namespace stm32plus {


  /**
   * Initialise GPIO pins for this timer GPIO mode
   * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
   */

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM17_CH1_IN {

    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOA,GPIOB,NULL,NULL };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_7,GPIO_Pin_9,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER17>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER17,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF);
    }
  };


  /**
   * Initialise GPIO pins for this timer GPIO mode
   * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
   */

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM17_CH1_OUT {

    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOA,GPIOB,NULL,NULL };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_7,GPIO_Pin_9,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER17>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER17,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF);
    }
  };


  /**
   * Initialise GPIO pins for this timer GPIO mode
   * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
   */

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM17_BKIN {

    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOA,NULL,NULL,NULL };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_10,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER17>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER17,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF);
    }
  };


  /**
   * Initialise GPIO pins for this timer GPIO mode
   * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
   */

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM17_CH1N {

    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOB,NULL,NULL,NULL };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_7,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER17>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER17,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF);
    }
  };

  /**
   * Timer feature to enable any number of the GPIO alternate function outputs.
   * All remap levels are supported. An example declaration could be:
   *
   * Timer17GpioFeature<REMAP_NONE,TIM17_CH1_OUT>
   */

  template<TimerGpioRemapLevel TRemapLevel,template<TimerGpioRemapLevel> class TF0=NullTimerGpio,template<TimerGpioRemapLevel> class TF1=NullTimerGpio,template<TimerGpioRemapLevel> class TF2=NullTimerGpio>
  struct Timer17GpioFeature;


  template<template<TimerGpioRemapLevel> class TF0,template<TimerGpioRemapLevel> class TF1,template<TimerGpioRemapLevel> class TF2>
  struct Timer17GpioFeature<TIMER_REMAP_NONE,TF0,TF1,TF2> : public TimerFeatureBase {
    Timer17GpioFeature(Timer& timer) : TimerFeatureBase(timer) {
      TF0<TIMER_REMAP_NONE>::initialise();
      TF1<TIMER_REMAP_NONE>::initialise();
      TF2<TIMER_REMAP_NONE>::initialise();
    }
  };


  template<template<TimerGpioRemapLevel> class TF0,template<TimerGpioRemapLevel> class TF1,template<TimerGpioRemapLevel> class TF2>
  struct Timer17GpioFeature<TIMER_REMAP_PARTIAL1,TF0,TF1,TF2> : public TimerFeatureBase {
    Timer17GpioFeature(Timer& timer) : TimerFeatureBase(timer) {
      TF0<TIMER_REMAP_PARTIAL1>::initialise();
      TF1<TIMER_REMAP_PARTIAL1>::initialise();
      TF2<TIMER_REMAP_PARTIAL1>::initialise();
    }
  };
}
