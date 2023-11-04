/*
 * PWM_Lconfig.c
 *
 * Created: 12/4/2022 11:30:14 AM
 *  Author: GAZAR
 */ 

#include "PWM.h"

const PWM_ConfigurationType gaStrPWM_Config[NUM_OPERATING_PWM_CHANNELS] = 
{
	{
		PWM_TIMER_0_CHANNEL,
		PWM_PHASE_CORRECT,
		PWM_PRESCALE_64,
		PWM_INVERTED,
		256U,
		4U,
		50U
	}
};
