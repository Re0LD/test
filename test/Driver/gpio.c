#include "gpio.h"


void led_init(void)
{
  rcu_periph_clock_enable(RCU_GPIOC);
  gpio_mode_set(RCU_GPIOC,GPIO_MODE_OUTPUT,GPIO_PUPD_NONE,GPIO_PIN_13);
  gpio_output_options_set(GPIOC,GPIO_OTYPE_PP,GPIO_OSPEED_50MHZ,GPIO_PIN_13);
  
  gpio_bit_reset(GPIOC,GPIO_PIN_13);
  
}

void arm_updata_init(void)
{
  rcu_periph_clock_enable(RCU_GPIOC);
  gpio_mode_set(RCU_GPIOC,GPIO_MODE_OUTPUT,GPIO_PUPD_NONE,GPIO_PIN_14);
  gpio_output_options_set(GPIOC,GPIO_OTYPE_PP,GPIO_OSPEED_50MHZ,GPIO_PIN_14);
  
  gpio_bit_set(GPIOC,GPIO_PIN_14);
  
}
