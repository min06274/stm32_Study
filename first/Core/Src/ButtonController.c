#include "ButtonController.h"

int count = 0;

void checkButton()
{

	  if(g_f_sw_up)
	  {

		  HAL_GPIO_TogglePin(PB6_LED1_GPIO_Port, PB6_LED1_Pin);
		  g_f_sw_up = 0;
		  count++;
		  if(count>99)
		  {
			  count = 0;
		  }
		  printTemper(count);

	  }
}
