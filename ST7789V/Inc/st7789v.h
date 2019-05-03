/*
 * st7789v.h
 *
 *  Created on: 9. 4. 2019
 *      Author: daymoon
 */

#ifndef ST7789V_H_
#define ST7789V_H_

#include "main.h"
#include "st7789v_commands.h"
//#include <stm32f4xx_custom.h>
//#include "stm32f4xx_conf.h"


/*
#define DISPLAY_SPI			SPI2
#define SPI2_CLK			RCC_APB1Periph_SPI2

#define DISPLAY_SS_PORT    	GPIOG
#define DISPLAY_SS			GPIO_Pin_10
#define DISPLAY_SS_CLOCK	RCC_AHB1Periph_GPIOG

#define DISPLAY_RST_PORT	GPIOC
#define DISPLAY_RST   		GPIO_Pin_6
#define DISPLAY_RST_CLOCK	RCC_AHB1Periph_GPIOC

#define DISPLAY_RS_PORT   	GPIOC
#define DISPLAY_RS    		GPIO_Pin_7
#define DISPLAY_RS_CLOCK	RCC_AHB1Periph_GPIOC

#define DISPLAY_SCK_PORT	GPIOB
#define DISPLAY_SCK			GPIO_Pin_10
#define DISPLAY_SCK_SOURCE	GPIO_PinSource10
#define DISPLAY_SCK_CLOCK	RCC_AHB1Periph_GPIOB

#define DISPLAY_MOSI_PORT	GPIOC
#define DISPLAY_MOSI		GPIO_Pin_3
#define DISPLAY_MOSI_SOURCE	GPIO_PinSource3
#define DISPLAY_MOSI_CLOCK	RCC_AHB1Periph_GPIOC

//to je moje
#define OUT_1_CLOCK				RCC_AHB1Periph_GPIOC
#define OUT_1_PORT				GPIOC
#define OUT_1_PIN				GPIO_Pin_2

*/
//to uz neni moje

#define DISPXSIZE     	240
#define DISPYSIZE     	320
#define BACKGROUND    	BLACK
#define FOREGROUND		WHITE
#define IDLEICONS		GRAY
#define PREPAREICONS	GRAY
#define PRINTICONS		ORANGE

#define CHARHEIGHT    	12
#define CHARWIDTH     	12
#define LINEYSPACE	 	2
#define KURSORSIZE	  	14
#define SPECIALKURSOR 	18

#define INV           	80
#define NOINV         	0

void st7789v_config(void);
void st7789v_init(void);
void st7789v_display_clear(uint16_t color);
void st7789v_window_clear(uint16_t startx, uint16_t endx, uint16_t starty, uint16_t endy, uint16_t color);
void st7789v_set_cursor(uint8_t xpos, uint16_t ypos);
void st7789v_testpins(void);
void display_init(void);
void duha(void);
void menu_init(void);
void print_char(uint8_t character, uint8_t xpos, uint16_t ypos, uint16_t color, uint8_t inv);
void text_print(uint8_t x, uint16_t y, uint8_t *text, uint16_t color, uint8_t mode, uint16_t maxwidth);
void logo(uint8_t color);
void white(void);
void black(void);
void black_line(void);
void white_line(void);

void send_intruction(uint8_t byte);
void send_data(uint8_t byte);
void CS_low(void);
void CS_high(void);
void RS_instruction(void);
void RS_data(void);
void RST_active(void);
void RST_deactive(void);


extern const uint8_t KURZOR[];
extern const uint8_t KURZOROFF[];

#endif /* ST7789V_H_ */
