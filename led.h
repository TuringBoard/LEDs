// led.h

#ifndef LED_H_
#define LED_H_

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include "tm4c123gh6pm.h"
#include "clock.h"
#include "gpio.h"
#include "wait.h"

void setPwmDutyCycle(uint8_t mode);
void initializePwm();

#endif /* LED_H_ */
