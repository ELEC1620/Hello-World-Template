/*  Hello-World-Template
*   This template code is a base from which serial output commands can be added.
*   
*   The code should be modified in accordance with the Serial Communication Activities. 
*
*   Board: NUCLEO L476RG
*   Author: James Chandler 2021
*/
#include "mbed.h"

DigitalOut led1(PC_0);

int main()
{
    led1.write(1); // The LED is set high for 1 sec and then switched off to help identify code is active/reset
    // Add code here to print a message to the user. 
    thread_sleep_for(1000);
    led1.write(0);
}
