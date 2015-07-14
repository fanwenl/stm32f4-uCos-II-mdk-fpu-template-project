#ifndef MAIN_H
#define MAIN_H

#ifdef __cplusplus
 extern "C" {
#endif
   
#include "stm32f4xx.h"
#include "ucos_ii.h"
	 
#define APP_TASK0_STK_SIZE				512
#define APP_TASK0_PRIO					8
static OS_STK		App_Task0Stack[APP_TASK0_STK_SIZE];
static void App_Task0(void *p_arg);

#define APP_TASK1_STK_SIZE				512
#define APP_TASK1_PRIO					9
static OS_STK		App_Task1Stack[APP_TASK1_STK_SIZE];
static void App_Task1(void *p_arg);
	 
#define APP_TASK2_STK_SIZE				512
#define APP_TASK2_PRIO					10
static OS_STK		App_Task2Stack[APP_TASK2_STK_SIZE];
static void App_Task2(void *p_arg);

#define APP_TASK3_STK_SIZE				512
#define APP_TASK3_PRIO					11
static OS_STK		App_Task3Stack[APP_TASK3_STK_SIZE];
static void App_Task3(void *p_arg);

#ifdef __cplusplus
 }
#endif /* C++ */

#endif /* MAIN_H */

