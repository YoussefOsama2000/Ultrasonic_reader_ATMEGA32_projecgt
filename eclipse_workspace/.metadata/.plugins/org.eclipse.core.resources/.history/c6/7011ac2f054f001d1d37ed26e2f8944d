 /******************************************************************************
 *
 * Module: ultrasonic sensor
 *
 * File Name: utrasonic.h
 *
 * Description: header file for ultrasonic sensor driver
 *
 * Author: Youssef Osama
 *
 *******************************************************************************/
#ifndef Ultrasonic
#define Ultrasonic
#include "std_types.h"
#define TRIGGER_PORT_ID  PORTB_ID
#define TRIGGER_PIN_ID PIN5_ID
/*
 * this function is made to initialize the input capture unit and
 * set the pin of trigger pin of the ultrasonic sensor
 */
void Ultrasonic_init(void);
/*
 * this function sends the trigger signal to the sensor
 */
void Ultrasonic_Trigger(void);
/*
 * this function call the trigger function
 * then it waits for the new value from the ICU then sends it
 * in the return
*/
uint16 Ultrasonic_readDistance(void);
#endif
