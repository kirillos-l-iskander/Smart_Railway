#ifndef CONFIG_H
#define CONFIG_H

//#include "CORE.h"
//#include "IO.h"
#include "stm32f10x.h"
#include "stm32f10x_conf.h"
#include "system_stm32f10x.h"
#include "SchedulerConfig.h"

//--------------------------------------------------------------------------------------------------------------------
#ifndef TRUE
#define FALSE							( SCH_FALSE )
#define TRUE							( !FALSE )
#endif
//--------------------------------------------------------------------------------------------------------------------

//IR--------------------
#define IR_PORT						( GPIOB )
#define IR0								( 7 )
#define IR1								( 8 )
#define IR2								( 9 )
//IR--------------------

//LED--------------------
#define LED_PORT				( GPIOC )
#define LED0						( 13 )
#define LED1						( 14 )
//LED--------------------

//LCD--------------------
#define LCD_CON_PORT		( GPIOC )
#define RS							( 14 )	//0 -> command, 1 -> data
#define RW							( 0 )	//0 -> write, 1 -> read
#define E								( 15 )	//0 -> disable LCD, 1 -> enable LCD

#define LCD_DAT_PORT		( GPIOA )
#define D0							( 0 )
#define D1							( 1 )
#define D2							( 2 )
#define D3							( 3 )
#define D4							( 4 )
#define D5							( 5 )
#define D6							( 6 )
#define D7							( 7 )
#define DPINS						( 0xFF )

#define ROW_NUM					( 2 )
#define COL_NUM					( 16 )
//LCD--------------------

//NRF--------------------
#define SPI2_PORT	 		( GPIOB )
#define SPI2_MOSI 		( 15 )
#define SPI2_MISO 		( 14 )
#define SPI2_SCK			( 13 )
#define SPI2_NSS			( 12 )

#define NRF_PORT			( GPIOA )
#define CSN						( 8 )
#define CE						( 9 )
#define IRQ						( 10 )

#define DELAY					( 15 )
#define COUNT					( 15 )
#define ADDR_WIDTH		( 5 )
#define PAYLOAD_SIZE	( 5 )
//NRF--------------------

#endif /* CONFIG_H */
