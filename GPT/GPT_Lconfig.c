/*
 * GPT_Lconfig.c
 *
 * Created: 11/30/2022 4:46:01 PM
 *  Author: GAZAR
 */ 

#include "GPT.h"
const GPT_ConfigurationType gaStrGPT_Config[NUM_TIMERS_OPERATING] = 
{
	{
		GPT_TIMER_2,
		GPT_CTC_MODE,
		GPT_PRESCALE_8,
		GPT_INTERRUPT_DISABLED
	}
};
