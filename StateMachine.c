#include "StateMachine.h"

#define MILLISECOND_ON_KIT 270
#define MILLISECOND_ON_SIMULATION 30

/*
- When button 1 is pressed and released, LED 1 will be on and stay lit for 1
    second then the LED 1 is switched off.
- If button 1 is kept pushed, the LED will stay on.
- If button 1 is pressed and released twice and the time between the first and
    second presses is less than 1s, then the LED 1 will be on for 2 seconds then it
    will be turned off.
- If the time between the first and second presses is more than 1s then the led will
    be turned off after 1s.
*/
void Req_6()

{
    uint16 counter =0;
    uint16 One_Second= 1000 * MILLISECOND_ON_KIT / 20; // 20 is a factor to calibrate time
    uint8 pressed_twice = 0, pressed_once = 0;
    while (pushButton_GetStatus(BTN_1) == Pressed)
    {
        counter ++;
        Led_On(LED_1);
        pressed_once = 1;
    }
    while ((counter < One_Second)&& (pressed_once == 1))
    {
        Led_On(LED_1);
        counter++;
        if (pushButton_GetStatus(BTN_1) == Pressed)
            pressed_twice = 1;
    }
    Led_On(LED_0);
    if (pressed_twice == 1)
    {
        SwDelay_ms(1000);
    }
    Led_Off(LED_1);
    Led_Off(LED_0);

}

/*
- Using LED 1, 2 and 3 assume that LED 1 means go, LED 2 means get ready,
    LED 3 Means stop
- Make a periodic state machine that changes with time (1 second) with no
    external input.
- The state machine:
- GO->Stop->Get Ready->Go.
*/
void Req_7 ()
{
    while (1)
    {
        /*
        Led_On(LED_1);
        SwDelay_ms(1000);
        Led_Off(LED_1);
        Led_On(LED_3);
        SwDelay_ms(1000);
        Led_Off(LED_3);
        Led_On(LED_2);
        SwDelay_ms(1000);
        Led_Off(LED_2);
        */
        uint8 state =0;
        switch (state)
        {
        case 0:
            Led_On(LED_1);
            SwDelay_ms(1000);
            Led_Off(LED_1);
            state ++;
        case 1:
            Led_On(LED_3);
            SwDelay_ms(1000);
            Led_Off(LED_3);
            state ++;
        case 3:
            Led_On(LED_2);
            SwDelay_ms(1000);
            Led_Off(LED_2);
        }
    }
}
