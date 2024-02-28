#include "spi.h"


void spi0_init(void)
{
  
  spi_parameter_struct spi_struct;
  
  rcu_periph_clock_enable(RCU_GPIOA);
  rcu_periph_clock_enable(RCU_SPI0);
  
  gpio_af_set(GPIOA,GPIO_AF_5,GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7);
  gpio_mode_set(GPIOA,GPIO_MODE_AF,GPIO_PUPD_NONE,GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_7);
  gpio_output_options_set(GPIOA,GPIO_OTYPE_PP,GPIO_OSPEED_50MHZ,GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_7);
  
  
  spi_struct.device_mode = SPI_MASTER;                    /*!< SPI master  ������*/
  spi_struct.trans_mode = SPI_TRANSMODE_FULLDUPLEX;         /*!< SPI transfer type ȫ˫�� */
  spi_struct.frame_size =  SPI_FRAMESIZE_8BIT;              /*!< SPI frame size  һ��8�ֽ� */
  spi_struct.nss = SPI_NSS_SOFT;                            /*!< SPI NSS control by software ���CS */
  spi_struct.endian = SPI_ENDIAN_MSB;                       /*!< SPI big endian or little endian  ������ֽ���ǰ*/
  spi_struct.clock_polarity_phase = SPI_CK_PL_LOW_PH_1EDGE; /*!< SPI clock phase and polarity ���е͵�ƽ ��һ�����ؽ��в���*/
  spi_struct.prescale = SPI_PSC_8;                          /*!< SPI prescaler factor 8��Ƶ*/
  spi_init(SPI0, &spi_struct);
  
  spi_enable(SPI0);
}
