/*
 * Configuration of module Mcu (Mcu_Cfg.c)
 *
 * Created by: 
 * Configured for (MCU): TMS570
 *
 * Module vendor: ArcCore
 * Module version: 2.0.2
 *
 * 
 * Generated by Arctic Studio (http://arccore.com) 
 *           on Mon Oct 25 12:52:40 CEST 2010
 */


#ifndef MCU_CFG_C_
#define MCU_CFG_C_

#include "Mcu.h"

Mcu_RamSectorSettingConfigType Mcu_RamSectorSettingConfigData[] = {
  {
  	.McuRamDefaultValue = 0,
    .McuRamSectionBaseAddress = 0,
  	.McuRamSectionSize = 0xFF,
  }
};

Mcu_ClockSettingConfigType Mcu_ClockSettingConfigData[] =
{
  {
    .McuClockReferencePointFrequency = 16000000UL,
    .Pll1    = 4, // REFCLKDIV
    .Pll2    = 100,   // PLLMULT
    .Pll3    = 2,     // ODPLL
    .Pll4    = 2,    // PLLDIV
  },
};


const Mcu_ConfigType McuConfigData[] = {
  {
	.McuClockSrcFailureNotification = 0,
	.McuRamSectors = 1,
	.McuClockSettings = 1,
	.McuDefaultClockSettings = 0,
	.McuClockSettingConfig = &Mcu_ClockSettingConfigData[0],
	.McuRamSectorSettingConfig = &Mcu_RamSectorSettingConfigData[0],
  }
};

#endif /*MCU_CFG_C_*/
