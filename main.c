/*
 */

//#include <avr/io.h>
#include "led.h"
#include "gpio.h"
#include "ledConfig.h"
#include "pushButton.h"
#include "pushButtonConfig.h"
int main(void)
{

    // Insert code
    gpioPortDirection(GPIOB, 0xFF);
    pushButton_Init(BTN_1);
    while(1)
    {
        Req_7();
    }
    return 0;
}
