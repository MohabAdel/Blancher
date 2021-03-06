/*
 * Powder.c
 *
 *  Created on: Aug 25, 2018
 *      Author: M.nagah
 */
#include "PowderIF.h"
/********************************Variables ***********************************/
g_Timer_Config *g_Powder_config;

volatile float g_GM_target ;

float g_gram_for_one_ticks;
/*****************************************************************************/

/************************** Functions Prototypes *****************************/
void Powder_ISR(uint32_t dif_time);
/*****************************************************************************/
/*
 * init the Powder gm for each ticks
 * and the timer for Powder encoder
 * @parameters gram of the salt of each tick and timer number
 * @return Nothing
 */
void Powder_init(float Gram_for_one_ticks ,int Timer_number )
{
	// interrupt ever ticks
	g_Powder_config->ticks = 1; //
	//timer number
	g_Powder_config->timer_number = Timer_number;
	// the isr call back function
	g_Powder_config->isr_call_back = Powder_ISR;
	// the gram for each ticks value
	g_gram_for_one_ticks = Gram_for_one_ticks;

}
/*
 * using to Drop salt into the tank u
 * polling Fuction using Interrupt to Exit polling
 * @parameter the amount of salt by Gram
 * @Return Nothing
 */
void Powder_drop(float Gram)
{
	//the desire amount of salt by Gram
	g_GM_target = Gram;
	//Tutn on the Powder Motor
	Powder_motor_change_state(1);
	// wait until Put the Whole amount of the salt
	while(g_GM_target > 0.1);
	// close the Motor after put the desire salt
	Powder_motor_change_state(0);

}
/*
 * ISR call Back function
 * @parameter different time between each ticks
 * @return Nothing
 */
void Powder_ISR(uint32_t dif_time)
{
	//decrease the amount of salt with one Ticks amount
	g_GM_target -=g_gram_for_one_ticks ;
}

