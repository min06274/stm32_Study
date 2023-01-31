/*
 * heaterController.h
 *
 *  Created on: Jan 31, 2023
 *      Author: dlals
 */

#ifndef INC_HEATERCONTROLLER_H_
#define INC_HEATERCONTROLLER_H_

#include "main.h"

enum{
	t_ON = 0,
	t_OFF = 1
};

uint8_t getHeaterState();
void heaterControll(uint8_t onOff);

#endif /* INC_HEATERCONTROLLER_H_ */
