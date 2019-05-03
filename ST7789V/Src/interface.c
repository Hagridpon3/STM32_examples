#include "interface.h"

void delay_ms(uint16_t time)
{
	HAL_Delay(time);
}

void SPI2_Write(uint8_t writedat)
{
	HAL_SPI_Transmit(&hspi2, &writedat, 1, HAL_MAX_DELAY);
}

void SPI2_Write_line(uint8_t writedat, uint32_t len)
{
	HAL_SPI_Transmit(&hspi2, &writedat, len, HAL_MAX_DELAY);
}
