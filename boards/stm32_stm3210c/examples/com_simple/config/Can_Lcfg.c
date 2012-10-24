/*
* Configuration of module: Can (Can_Lcfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    STM32_F107
*
* Module vendor:           ArcCore
* Generator version:       1.0.1
*
* Generated by Arctic Studio (http://arccore.com) 
*/

	

#include <stdlib.h>
#include "Can.h"
#include "CanIf_Cbk.h"


Can_FilterMaskType Can_FilterMaskConfigData_Controller_1_Mask_1 = 0x0;


const Can_HardwareObjectType CanHardwareObjectConfig_Controller_1[] = {
	{
		.CanObjectId =		HWObj_1,
		.CanHandleType =	CAN_ARC_HANDLE_TYPE_BASIC,
		.CanIdType =		CAN_ID_TYPE_STANDARD,
		.CanObjectType =	CAN_OBJECT_TYPE_RECEIVE,
		.CanFilterMaskRef =	&Can_FilterMaskConfigData_Controller_1_Mask_1,
		
		.Can_Arc_MbMask =	0x0,
		.Can_Arc_EOL =		0,
	},
	{
		.CanObjectId =		HWObj_2,
		.CanHandleType =	CAN_ARC_HANDLE_TYPE_BASIC,
		.CanIdType =		CAN_ID_TYPE_STANDARD,
		.CanObjectType =	CAN_OBJECT_TYPE_TRANSMIT,
		.CanFilterMaskRef =	&Can_FilterMaskConfigData_Controller_1_Mask_1,
		
		.Can_Arc_MbMask =	0x0,
		.Can_Arc_EOL =		1,
	},
};


const Can_ControllerConfigType CanControllerConfigData[] =
{
  {
    .CanControllerActivation =	TRUE,
    .CanControllerBaudRate =	125,
    .CanControllerId =			CAN_CTRL_1,
    .CanControllerPropSeg =		0,
    .CanControllerSeg1 =		12,
    .CanControllerSeg2 =		1,
    .CanBusOffProcessing =		CAN_ARC_PROCESS_TYPE_INTERRUPT,
    .CanRxProcessing =			CAN_ARC_PROCESS_TYPE_INTERRUPT,
    .CanTxProcessing =			CAN_ARC_PROCESS_TYPE_INTERRUPT,
    .CanWakeupProcessing =		CAN_ARC_PROCESS_TYPE_INTERRUPT,
	.CanCpuClockRef =			0,
    .Can_Arc_Hoh =				&CanHardwareObjectConfig_Controller_1[0],
    .Can_Arc_Loopback =			FALSE,
    .Can_Arc_Fifo =				0,
  },
};

const Can_CallbackType CanCallbackConfigData = {
    NULL, //CanIf_CancelTxConfirmation,
    CanIf_RxIndication,
    CanIf_ControllerBusOff,
    CanIf_TxConfirmation,
    NULL, //CanIf_ControllerWakeup,
    CanIf_Arc_Error,
};

const Can_ConfigSetType CanConfigSetData =
{
  .CanController =	CanControllerConfigData,
  .CanCallbacks =	&CanCallbackConfigData,
};

const Can_ConfigType CanConfigData = {
  .CanConfigSet =	&CanConfigSetData,
};

