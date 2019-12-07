#ifndef _STATE_MACHINE_H
#define _STATE_MACHINE_H


#include "pushButton.h"
#include "led.h"

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
void Req_6 ();


/*
- Using LED 1, 2 and 3 assume that LED 1 means go, LED 2 means get ready,
    LED 3 Means stop
- Make a periodic state machine that changes with time (1 second) with no
    external input.
- The state machine:
- GO->Stop->Get Ready->Go.
*/
void Req_7 ();














#endif // _STATE_MACHINE_H
