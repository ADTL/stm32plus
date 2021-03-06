/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012,2013,2014 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 */

#pragma once

/**
 * @file
 * Include this config file to get access to the SPI peripherals. All peripherals are supported and access is provided
 * via DMA and/or interrupts.
 */

// spi depends on rcc, gpio, dma, stream, event

#include "config/rcc.h"
#include "config/gpio.h"
#include "config/dma.h"
#include "config/stream.h"
#include "config/event.h"

// device-specific pin initialiser

#if defined(STM32PLUS_F1)

  #include "spi/f1/SpiPinInitialiser.h"

#elif defined(STM32PLUS_F4)

  #include "spi/f4/SpiAlternateFunctionMapper.h"
  #include "spi/f4/SpiPinInitialiser.h"

#elif defined(STM32PLUS_F0)

  // some unhelpful renaming went on inside the std peripheral library

  #define SPI_I2S_ReceiveData(a) SPI_I2S_ReceiveData16((a))
  #define SPI_I2S_SendData(a,b) SPI_I2S_SendData16((a),(b))
  #define SPI_I2S_ClearITPendingBit(a,b)  SPI_I2S_ClearFlag((a),(b))

  #include "spi/f0/SpiAlternateFunctionMapper.h"
  #include "spi/f0/SpiPinInitialiser.h"

#endif

// general includes for the peripheral

#include "spi/SpiEventSource.h"
#include "spi/Spi.h"
#include "spi/SpiPeripheral.h"

// generic feature includes

#include "spi/features/SpiFeatureBase.h"
#include "spi/features/SpiInterruptFeature.h"

// general includes for the peripheral

#include "spi/Spi1.h"
#include "spi/Spi2.h"
#include "spi/Spi3.h"

#define USE_SPI1_INTERRUPT
#define USE_SPI2_INTERRUPT
#define USE_SPI3_INTERRUPT

// utility classes

#include "spi/SpiPollingInputStream.h"
#include "spi/SpiPollingOutputStream.h"
