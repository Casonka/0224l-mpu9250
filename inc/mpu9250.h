#pragma once
#ifndef _MPU9250_H_
#define _MPU9250_H_

/* Memset extension */
#include <string.h>
/* Peripheral extension */
#if defined(STM32F401xC) || defined(STM32F407xx) || defined(STM32F411xE)
#include "stm32f4xx_hal.h"
#elif defined(STM32F103xB)
#include "stm32f1xx.hal.h"
#endif

typedef struct {
    I2C_HandleTypeDef *interface;
    

}mpu9250_t;


#endif /* _MPU9250_H_ */