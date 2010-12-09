/*
 * Configuration of module Os (Os_Cfg.c)
 *
 * Created by: ArcCore AB
 * Configured for (MCU): Undefined MCU
 *
 * Module vendor: ArcCore
 * Module version: 2.0.11
 *
 * Copyright ArcCore AB 2010
 * Generated by Arctic Studio (http://arccore.com) 
 *           on Mon Dec 06 14:44:20 CET 2010
 */

	

#include <stdlib.h>
#include <stdint.h>
#include "Platform_Types.h"
#include "Os.h"				// includes Os_Cfg.h
#include "os_config_macros.h"
#include "kernel.h"
#include "kernel_offset.h"
#include "alist_i.h"
#include "Mcu.h"

extern void dec_exception( void );

// Set the os tick frequency
OsTickType OsTickFreq = 1000;


// ###############################    DEBUG OUTPUT     #############################
uint32 os_dbg_mask = 0;
 


// #################################    COUNTERS     ###############################
GEN_COUNTER_HEAD {
	GEN_COUNTER(	COUNTER_ID_OsTick,
					"OsTick",
					COUNTER_TYPE_HARD,
					COUNTER_UNIT_NANO,
					0xffff,
					1,
					0,
					0),
};

CounterType Os_Arc_OsTickCounter = COUNTER_ID_OsTick;

// ##################################    ALARMS     ################################
GEN_ALARM_AUTOSTART(ALARM_ID_Alarm1, ALARM_AUTOSTART_ABSOLUTE, 100, 10, OSDEFAULTAPPMODE );
	

GEN_ALARM_HEAD {
	GEN_ALARM(	ALARM_ID_Alarm1,
				"Alarm1",
				COUNTER_ID_OsTick,
				GEN_ALARM_AUTOSTART_NAME(ALARM_ID_Alarm1),
				ALARM_ACTION_SETEVENT,
				TASK_ID_etask_1,
				EVENT_MASK_EVENT_2,
				NULL ),
};

// ################################    RESOURCES     ###############################
GEN_RESOURCE_HEAD {
};

// ##############################    STACKS (TASKS)     ############################
DECLARE_STACK(OsIdle,OS_OSIDLE_STACK_SIZE);
DECLARE_STACK(btask_3,2048);
DECLARE_STACK(etask_1,2048);
DECLARE_STACK(etask_2,2048);

// ##################################    TASKS     #################################
GEN_TASK_HEAD {
	GEN_ETASK(	OsIdle,
				0,
				FULL,
				TRUE,
				NULL,
				0 
	),
	GEN_BTASK(
		btask_3,
		3,
		FULL,
		FALSE,
		NULL,
		0,
		1
	),
				
	GEN_ETASK(
		etask_1,
		1,
		FULL,
		TRUE,
		NULL,
		0
	),
		
				
	GEN_ETASK(
		etask_2,
		2,
		FULL,
		TRUE,
		NULL,
		0
	),
		
				
};

// ##################################    HOOKS     #################################
GEN_HOOKS( 
	StartupHook, 
	NULL, 
	ShutdownHook, 
	ErrorHook,
	PreTaskHook, 
	PostTaskHook 
);

// ##################################    ISRS     ##################################


// ############################    SCHEDULE TABLES     #############################

// Table heads
GEN_SCHTBL_HEAD {
};

GEN_PCB_LIST()

uint8_t os_interrupt_stack[OS_INTERRUPT_STACK_SIZE] __attribute__ ((aligned (0x10)));

GEN_IRQ_VECTOR_TABLE_HEAD {};
GEN_IRQ_ISR_TYPE_TABLE_HEAD {};
GEN_IRQ_PRIORITY_TABLE_HEAD {};

#include "os_config_funcs.h"
