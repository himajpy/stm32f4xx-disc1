#ifndef PIN_HPP
#define PIN_HPP

#include "stm32f4xx_hal.h"

namespace hal {

class Pin {
private:
	GPIO_TypeDef *port; // zeiger auf io-port-struktur
	uint8_t pinNr;		// HW-Pinnr.

public:
};
}