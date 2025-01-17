/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Abdelrahman El-Badawy Fawzy
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 * Update: Edited to be used in ARM CPU MODES lecture.
 *
 ******************************************************************************
 */


#if !defined(__SOFT_FP__) && defined(__ARM_FP)
#warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif


#include "Schedular.h"

#include "string.h"


// Remember the modifications in the linkersript



Task_Config Task1, Task2, Task3;

uint8_t Task1Indication,Task2Indication,Task3Indication;


void task1()
{
	while(1){
		// Task1 Code
		Task1Indication^=1;
	}
}

void task2()
{
	while(1){
		// Task1 Code
		Task2Indication^=1;
	}
}

void task3()
{
	while(1){
		// Task1 Code
		Task3Indication ^= 1;
	}
}

int main(void)
{
	MYRTOS_errorID Error = NO_ERROR;
	// HW_Init	(Initialize clockTree, ResetController)
	HW_Init();

	if(MYRTOS_Init() != NO_ERROR)
		while(1);


	// Create tasks
	Task1.Stack_Size = 1024;   // 1kByte
	Task1.P_TaskEntry = task1;
	Task1.Priority = 3;
	strcpy(Task1.TaskName, "task_1");

	Task2.Stack_Size = 1024;   // 1kByte
	Task2.P_TaskEntry = task2;
	Task2.Priority = 3;
	strcpy(Task2.TaskName, "task_2");

	Task3.Stack_Size = 1024;   // 1kByte
	Task3.P_TaskEntry = task3;
	Task3.Priority = 3;
	strcpy(Task3.TaskName, "task_3");

	Error += MYRTOS_Create_Task(&Task1);
	Error += MYRTOS_Create_Task(&Task2);
	Error += MYRTOS_Create_Task(&Task3);

	MYRTOS_Activate_Task(&Task1);
	MYRTOS_Activate_Task(&Task2);
	MYRTOS_Activate_Task(&Task3);

	MYRTOS_START_OS();

	while(1)
	{



	}
}


