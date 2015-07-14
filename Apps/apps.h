#ifndef __APP_H__
#define __APP_H__

#include "ucos_ii.h"
	 
#define APP_TASK0_STK_SIZE				512
#define APP_TASK0_PRIO					8
extern OS_STK		App_Task0Stack[APP_TASK0_STK_SIZE];
void App_Task0(void *p_arg);

#define APP_TASK1_STK_SIZE				512
#define APP_TASK1_PRIO					9
extern OS_STK		App_Task1Stack[APP_TASK1_STK_SIZE];
void App_Task1(void *p_arg);
	 
#define APP_TASK2_STK_SIZE				512
#define APP_TASK2_PRIO					10
extern OS_STK		App_Task2Stack[APP_TASK2_STK_SIZE];
void App_Task2(void *p_arg);

#define APP_TASK3_STK_SIZE				512
#define APP_TASK3_PRIO					11
extern OS_STK		App_Task3Stack[APP_TASK3_STK_SIZE];
void App_Task3(void *p_arg);

#endif


