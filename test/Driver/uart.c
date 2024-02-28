#include "uart.h"

//*************************************
//串口0初始化
void usart0_init(uint32_t baudrat)
{
  rcu_periph_clock_enable(RCU_GPIOA);
  rcu_periph_clock_enable(RCU_USART0);
  
  gpio_af_set(GPIOA,GPIO_AF_7,GPIO_PIN_9);
  gpio_af_set(GPIOA,GPIO_AF_7,GPIO_PIN_10);
  
  gpio_mode_set(GPIOA,GPIO_MODE_AF,GPIO_PUPD_PULLUP,GPIO_PIN_9);
  gpio_output_options_set(GPIOA,GPIO_OTYPE_PP,GPIO_OSPEED_MAX,GPIO_PIN_9);
  gpio_mode_set(GPIOA,GPIO_MODE_AF,GPIO_PUPD_PULLUP,GPIO_PIN_10);
  
  usart_deinit(USART0);
  usart_baudrate_set(USART0,baudrat);
  usart_parity_config(USART0,USART_PM_NONE);
  usart_word_length_set(USART0,USART_WL_8BIT);
  usart_stop_bit_set(USART0,USART_STB_1BIT);
  
  usart_transmit_config(USART0,USART_TRANSMIT_ENABLE);
  usart_receive_config(USART0,USART_RECEIVE_ENABLE);
  
  usart_enable(USART0);
  
  nvic_irq_enable(USART0_IRQn,0,0);
  usart_interrupt_enable(USART0,USART_INT_RBNE);
}


void USART0_IRQHandler(void)
{
  
}

//*************************************
//串口1初始化
void usart1_init(uint32_t baudrat)
{
  rcu_periph_clock_enable(RCU_GPIOA);
  rcu_periph_clock_enable(RCU_USART1);
  
  gpio_af_set(GPIOA,GPIO_AF_7,GPIO_PIN_2);
  gpio_af_set(GPIOA,GPIO_AF_7,GPIO_PIN_3);
  
  gpio_mode_set(GPIOA,GPIO_MODE_AF,GPIO_PUPD_PULLUP,GPIO_PIN_2);
  gpio_output_options_set(GPIOA,GPIO_OTYPE_PP,GPIO_OSPEED_50MHZ,GPIO_PIN_2);
  gpio_mode_set(GPIOA,GPIO_MODE_AF,GPIO_PUPD_PULLUP,GPIO_PIN_3);
  
  usart_deinit(USART1);
  usart_baudrate_set(USART1,baudrat);
  usart_parity_config(USART1,USART_PM_NONE);
  usart_word_length_set(USART1,USART_WL_8BIT);
  usart_stop_bit_set(USART1,USART_STB_1BIT);
  
  usart_transmit_config(USART1,USART_TRANSMIT_ENABLE);
  usart_receive_config(USART1,USART_RECEIVE_ENABLE);
  
  usart_enable(USART1);
  
  nvic_irq_enable(USART1_IRQn,0,1);
  usart_interrupt_enable(USART1,USART_INT_RBNE);
}


void USART1_IRQHandler(void)
{
  
}

//*************************************
//串口2初始化
void usart2_init(uint32_t baudrat)
{
  rcu_periph_clock_enable(RCU_GPIOB);
  rcu_periph_clock_enable(RCU_USART2);
  
  gpio_af_set(GPIOB,GPIO_AF_7,GPIO_PIN_10);
  gpio_af_set(GPIOB,GPIO_AF_7,GPIO_PIN_11);
  
  gpio_mode_set(GPIOB,GPIO_MODE_AF,GPIO_PUPD_PULLUP,GPIO_PIN_10);
  gpio_output_options_set(GPIOB,GPIO_OTYPE_PP,GPIO_OSPEED_50MHZ,GPIO_PIN_10);
  gpio_mode_set(GPIOB,GPIO_MODE_AF,GPIO_PUPD_PULLUP,GPIO_PIN_11);
  
  usart_deinit(USART2);
  usart_baudrate_set(USART2,baudrat);
  usart_parity_config(USART2,USART_PM_NONE);
  usart_word_length_set(USART2,USART_WL_8BIT);
  usart_stop_bit_set(USART2,USART_STB_1BIT);
  
  usart_transmit_config(USART2,USART_TRANSMIT_ENABLE);
  usart_receive_config(USART2,USART_RECEIVE_ENABLE);
  
  usart_enable(USART2);
  
  nvic_irq_enable(USART2_IRQn,1,0);
  usart_interrupt_enable(USART2,USART_INT_RBNE);
}


void USART2_IRQHandler(void)
{
  
}

//*************************************
//串口5初始化
void usart5_init(uint32_t baudrat)
{
  rcu_periph_clock_enable(RCU_GPIOC);
  rcu_periph_clock_enable(RCU_USART5);
  
  gpio_af_set(GPIOC,GPIO_AF_7,GPIO_PIN_6);
  gpio_af_set(GPIOC,GPIO_AF_7,GPIO_PIN_7);
  
  gpio_mode_set(GPIOC,GPIO_MODE_AF,GPIO_PUPD_PULLUP,GPIO_PIN_6);
  gpio_output_options_set(GPIOC,GPIO_OTYPE_PP,GPIO_OSPEED_50MHZ,GPIO_PIN_6);
  gpio_mode_set(GPIOC,GPIO_MODE_AF,GPIO_PUPD_PULLUP,GPIO_PIN_7);
  
  usart_deinit(USART5);
  usart_baudrate_set(USART5,baudrat);
  usart_parity_config(USART5,USART_PM_NONE);
  usart_word_length_set(USART5,USART_WL_8BIT);
  usart_stop_bit_set(USART5,USART_STB_1BIT);
  
  usart_transmit_config(USART5,USART_TRANSMIT_ENABLE);
  usart_receive_config(USART5,USART_RECEIVE_ENABLE);
  
  usart_enable(USART5);
  
  nvic_irq_enable(USART5_IRQn,1,1);
  usart_interrupt_enable(USART5,USART_INT_RBNE);
}


void USART5_IRQHandler(void)
{
  
}
