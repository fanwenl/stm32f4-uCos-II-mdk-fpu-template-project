#include "stm32f4xx.h"
#include "apps.h"

int main(void)
{	
	uint8_t os_err;
	
	__disable_irq(); //��ֹ�����жϡ�
	
	OSInit(); //��ʼ��uC/OS-II���ʵʱ�ںˡ�

	os_err = OSTaskCreateExt((void (*)(void *)) App_Task0, //����һ����ʼ����
                             (void          * ) 0,
                             (OS_STK        * )&App_Task0Stack[APP_TASK0_STK_SIZE - 1],
                             (uint8_t         ) APP_TASK0_PRIO,
                             (uint16_t        ) APP_TASK0_PRIO,
                             (OS_STK        * )&App_Task0Stack[0],
                             (INT32U          ) APP_TASK0_STK_SIZE,
                             (void          * )0,
                             (uint16_t        )(OS_TASK_OPT_STK_CLR | OS_TASK_OPT_STK_CHK));
	if(os_err == OS_ERR_NONE)
	{
		OSTaskNameSet(APP_TASK0_PRIO, (uint8_t *)"Start Task", &os_err); //����ʼ����������
	}
	
    OSStart(); //��ʼUCOS�ںˡ�
	
	return 0;
}
