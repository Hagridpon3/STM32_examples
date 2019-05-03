/*
 * interface.h
 *
 *  Created on: May 3, 2019
 *      Author: ponyxis
 */

#ifndef INTERFACE_H_
#define INTERFACE_H_
#include "main.h"

void SPI2_Write(uint8_t writedat);
void SPI2_Write_line(uint8_t writedat, uint32_t len);
void delay_ms(uint16_t time);

#endif /* INTERFACE_H_ */
