#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include "led.h"

int main(void)
{
    uint8_t mode;

    initializePwm();

    // Light demo code
    while(true)
    {
        setPwmDutyCycle(mode);
    }
}
