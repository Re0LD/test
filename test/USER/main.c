#include "gd32f4xx.h"                   // Device header
#include "systick.h"
#include "uart.h"
#include "gpio.h"
#include "spi.h"


int main(void)
{
  nvic_priority_group_set(NVIC_PRIGROUP_PRE2_SUB2);
  
  
  usart0_init(115200);
  usart1_init(115200);
  usart2_init(115200);
  usart5_init(115200);
  
  led_init();
  arm_updata_init();
  spi0_init();
  
  while(1)
  {
    
  }
}

