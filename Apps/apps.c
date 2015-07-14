#include "apps.h"
#include "stm32f4_discovery.h"

OS_STK		App_Task0Stack[APP_TASK0_STK_SIZE];
OS_STK		App_Task1Stack[APP_TASK1_STK_SIZE];
OS_STK		App_Task2Stack[APP_TASK2_STK_SIZE];
OS_STK		App_Task3Stack[APP_TASK3_STK_SIZE];


/* ���ȿ�ʼ�����񣨿�ʼ����*/
void App_Task0(void *p_arg) 
{
	(void) p_arg;	
	
	STM_EVAL_LEDInit(LED3);
	
	OSTaskCreateExt((void (*)(void *)) App_Task1, //����һ����ʼ����
                             (void          * ) 0,
                             (OS_STK        * )&App_Task1Stack[APP_TASK1_STK_SIZE - 1],
                             (uint8_t         ) APP_TASK1_PRIO,
                             (uint16_t        ) APP_TASK1_PRIO,
                             (OS_STK        * )&App_Task1Stack[0],
                             (INT32U          ) APP_TASK1_STK_SIZE,
                             (void          * )0,
                             (uint16_t        )(OS_TASK_OPT_STK_CLR | OS_TASK_OPT_STK_CHK));
	
	OSTaskCreateExt((void (*)(void *)) App_Task2, //����һ����ʼ����
                             (void          * ) 0,
                             (OS_STK        * )&App_Task2Stack[APP_TASK2_STK_SIZE - 1],
                             (uint8_t         ) APP_TASK2_PRIO,
                             (uint16_t        ) APP_TASK2_PRIO,
                             (OS_STK        * )&App_Task2Stack[0],
                             (INT32U          ) APP_TASK2_STK_SIZE,
                             (void          * )0,
                             (uint16_t        )(OS_TASK_OPT_STK_CLR | OS_TASK_OPT_STK_CHK));
	
	OSTaskCreateExt((void (*)(void *)) App_Task3, //����һ����ʼ����
                             (void          * ) 0,
                             (OS_STK        * )&App_Task3Stack[APP_TASK3_STK_SIZE - 1],
                             (uint8_t         ) APP_TASK3_PRIO,
                             (uint16_t        ) APP_TASK3_PRIO,
                             (OS_STK        * )&App_Task3Stack[0],
                             (INT32U          ) APP_TASK3_STK_SIZE,
                             (void          * )0,
                             (uint16_t        )(OS_TASK_OPT_STK_CLR | OS_TASK_OPT_STK_CHK));
							 
	OS_CPU_SysTickInit();	//����SysTick,�������жϡ�

#if (OS_TASK_STAT_EN > 0)
    OSStatInit(); //��ʼ����ͳ�ƺ�����
#endif

	while(1){			
		STM_EVAL_LEDToggle(LED3);
		OSTimeDly(300);
	}	
}	

void App_Task1(void *p_arg) 
{
	(void) p_arg;	
	
	STM_EVAL_LEDInit(LED4);

	while(1){			
		STM_EVAL_LEDToggle(LED4);
		OSTimeDly(400);
	}	
}	

void App_Task2(void *p_arg) 
{
	(void) p_arg;	
	
	STM_EVAL_LEDInit(LED6);

	while(1){			
		STM_EVAL_LEDToggle(LED6);
		OSTimeDly(500);
	}	
}

void App_Task3(void *p_arg) 
{
	(void) p_arg;	
	
	STM_EVAL_LEDInit(LED5);

	while(1){			
		STM_EVAL_LEDToggle(LED5);
		OSTimeDly(600);
	}	
}







