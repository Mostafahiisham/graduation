/*
 * car.c
 *
 *  Created on: Oct 24, 2024
 *      Author: Mostafa Hisham
 */
#include<Std_Types.h>
#include<MGPIO.h>
#include<STP.h>
#include<DC_Motor.h>
#include<TIMER1.h>
#include<GPTimer.h>
#include<car.h>

void CAR_Movement_Init(void)
{

	/*Enable Motors Pin*/
	GPIO_SetMode(PORTA, PIN8, ALTERNATE);
	GPIO_SetMode(PORTA, PIN9, ALTERNATE);
	GPIO_SetMode(PORTA, PIN10, ALTERNATE);
	GPIO_SetMode(PORTB, PIN1, ALTERNATE);
	GPIO_SetAlternateFunc(PORTA, PIN8, AF1);
	GPIO_SetAlternateFunc(PORTA, PIN9, AF1);
	GPIO_SetAlternateFunc(PORTA, PIN10, AF1);
	GPIO_SetAlternateFunc(PORTB, PIN1, AF2);
}


void CAR_Moveforward(void)
{
	DCMOTOR_RotateClockwise(MOTOR1);
	DCMOTOR_RotateClockwise(MOTOR2);
	DCMOTOR_RotateClockwise(MOTOR3);
	DCMOTOR_RotateClockwise(MOTOR4);
	TIMER1_SetOutputCompareMode(channel1, PWM_MODE1, 65500, SPEED5);
	TIMER1_SetOutputCompareMode(channel2, PWM_MODE1, 65500, SPEED5);
	TIMER1_SetOutputCompareMode(channel3, PWM_MODE1, 65500, SPEED5);
	//TIMER1_SetOutputCompareMode(channel4, PWM_MODE1, 65500, SPEED5);
	TIMER3_SetOutputCompareMode(TIMx_channel4,TIMx_PWM_MODE1, 65500, SPEED5);
}
void CAR_MovebackWard(void)
{

	DCMOTOR_RotateCounterClockWise(MOTOR1);
	DCMOTOR_RotateCounterClockWise(MOTOR2);
	DCMOTOR_RotateCounterClockWise(MOTOR3);
	DCMOTOR_RotateCounterClockWise(MOTOR4);
	TIMER1_SetOutputCompareMode(channel1, PWM_MODE1, 65500, SPEED5);
	TIMER1_SetOutputCompareMode(channel2, PWM_MODE1, 65500, SPEED5);
	TIMER1_SetOutputCompareMode(channel3, PWM_MODE1, 65500, SPEED5);
	//TIMER1_SetOutputCompareMode(channel4, PWM_MODE1, 65500, SPEED5);
	TIMER3_SetOutputCompareMode(TIMx_channel4,TIMx_PWM_MODE1, 65500, SPEED5);
}
void CAR_Moveright(void)
{
	DCMOTOR_RotateClockwise(MOTOR1);
	DCMOTOR_Stop(MOTOR2);
	DCMOTOR_RotateClockwise(MOTOR3);
	DCMOTOR_Stop(MOTOR4);
	TIMER1_SetOutputCompareMode(channel1, PWM_MODE1, 65500, SPEED5);
	TIMER1_SetOutputCompareMode(channel2, PWM_MODE1, 65500, SPEED5);
	TIMER1_SetOutputCompareMode(channel3, PWM_MODE1, 65500, SPEED5);
	//TIMER1_SetOutputCompareMode(channel4, PWM_MODE1, 65500, SPEED5);
	TIMER3_SetOutputCompareMode(TIMx_channel4,TIMx_PWM_MODE1, 65500, SPEED5);
}
void CAR_Moveleft(void)
{

	//STP_SendData();
	//STP_ShiftData(MOVE_LEFT);
	//STP_SendData();
	DCMOTOR_RotateClockwise(MOTOR2);
	DCMOTOR_Stop(MOTOR1);
	DCMOTOR_RotateClockwise(MOTOR4);
	DCMOTOR_Stop(MOTOR3);
	TIMER1_SetOutputCompareMode(channel1, PWM_MODE1, 65500, SPEED5);
	TIMER1_SetOutputCompareMode(channel2, PWM_MODE1, 65500, SPEED5);
	TIMER1_SetOutputCompareMode(channel3, PWM_MODE1, 65500, SPEED5);
	//TIMER1_SetOutputCompareMode(channel4, PWM_MODE1, 65500, SPEED5);
	TIMER3_SetOutputCompareMode(TIMx_channel4,TIMx_PWM_MODE1, 65500, SPEED5);
}

void CAR_sTOP(void)
{
	DCMOTOR_Stop(MOTOR1);
	DCMOTOR_Stop(MOTOR2);
	DCMOTOR_Stop(MOTOR3);
	DCMOTOR_Stop(MOTOR4);
}
void CAR_firstSpeed(void)
{
	TIMER1_SetOutputCompareMode(channel1, PWM_MODE1, 65500, SPEED1);
	TIMER1_SetOutputCompareMode(channel2, PWM_MODE1, 65500, SPEED1);
	TIMER1_SetOutputCompareMode(channel3, PWM_MODE1, 65500, SPEED1);
	//TIMER1_SetOutputCompareMode(channel4, PWM_MODE1, 65500, SPEED1);
	TIMER3_SetOutputCompareMode(TIMx_channel4,TIMx_PWM_MODE1, 65500, SPEED1);
}
void CAR_secondSpeed(void)
{
	TIMER1_SetOutputCompareMode(channel1, PWM_MODE1, 65500, SPEED2);
	TIMER1_SetOutputCompareMode(channel2, PWM_MODE1, 65500, SPEED2);
	TIMER1_SetOutputCompareMode(channel3, PWM_MODE1, 65500, SPEED2);
	//TIMER1_SetOutputCompareMode(channel4, PWM_MODE1, 65500, SPEED2);
	TIMER3_SetOutputCompareMode(TIMx_channel4,TIMx_PWM_MODE1, 65500, SPEED2);
}
void CAR_thirdSpeed(void)
{
	TIMER1_SetOutputCompareMode(channel1, PWM_MODE1, 65500, SPEED3);
	TIMER1_SetOutputCompareMode(channel2, PWM_MODE1, 65500, SPEED3);
	TIMER1_SetOutputCompareMode(channel3, PWM_MODE1, 65500, SPEED3);
	//TIMER1_SetOutputCompareMode(channel4, PWM_MODE1, 65500, SPEED3);
	TIMER3_SetOutputCompareMode(TIMx_channel4,TIMx_PWM_MODE1, 65500, SPEED3);
}

void CAR_fourthSpeed(void)
{
	TIMER1_SetOutputCompareMode(channel1, PWM_MODE1, 65500, SPEED4);
	TIMER1_SetOutputCompareMode(channel2, PWM_MODE1, 65500, SPEED4);
	TIMER1_SetOutputCompareMode(channel3, PWM_MODE1, 65500, SPEED4);
	//TIMER1_SetOutputCompareMode(channel4, PWM_MODE1, 65500, SPEED4);
	TIMER3_SetOutputCompareMode(TIMx_channel4,TIMx_PWM_MODE1, 65500, SPEED4);
}
void CAR_fifthSpeed(void)
{
	TIMER1_SetOutputCompareMode(channel1, PWM_MODE1, 65500, SPEED5);
	TIMER1_SetOutputCompareMode(channel2, PWM_MODE1, 65500, SPEED5);
	TIMER1_SetOutputCompareMode(channel3, PWM_MODE1, 65500, SPEED5);
	//TIMER1_SetOutputCompareMode(channel4, PWM_MODE1, 65500, SPEED5);
	TIMER3_SetOutputCompareMode(TIMx_channel4,TIMx_PWM_MODE1, 65500, SPEED5);
}
