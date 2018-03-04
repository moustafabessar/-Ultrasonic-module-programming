/*
 * Ultrasonic.h
 *
 * Created: 2/27/2018 9:08:44 PM
 *  Author: Moustafa
 */ 
#define F_CPU 8000000UL
#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#define ECHO_PIN      6      //pin 6
#define TRIGGER_PIN   5      //pin 5
#define Sensor_DDR    DDRD
#define Sensor_PORT   PORTD


void SetupUltrasonic(void);
void delay_10us();
void SendTrigger(void);
void ReceiveEcho(void);
void RangeDetection(unsigned char d);






#endif /* ULTRASONIC_H_ */
