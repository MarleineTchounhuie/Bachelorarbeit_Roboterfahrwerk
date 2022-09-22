/*
 * Main.cpp
 *
 *  Created on: 22.09.2022
 *      Author: Marleine T.
 */

#include <Arduino.h>
#include "Motor.h"
#include "Fahrwerk.h"

Motor m1(4,8,5,255);
Motor m2(12,13,6,255);
Fahrwerk f(m1,m2);
int command;


void setup()
{

}

void loop()
{
   if(Serial.available())
   {
	   command = Serial.read();
//	   if (command == 'X') {
//	         state = 1;
//	       } else if (command == 'x') {
//	         state = 0;
//	       }
	   if (command == 'U'){
		   f.move(-255,-255);
	   }

    else if (command == 'V')
    {
    	f.move(255,255);

    }

//    else if (command == 'L' && state == 0) {
//    	f.move(255,-255);
//    }
//    else if (command == 'R' && state == 0){
//    	f.move(-255,255);

    //}
   }

//	if(j.getState())
//	{
//	  f.move(j.getXPin(),j.getYPin());
//	}
//	else
//	{

	//f.move(512,512);

	//}

//
//	f.move(255,255);
//	delay(1000);
//
//	f.move(-255,-255);
//	delay(1000);
//
//	f.move(255,-255);
//	delay(1000);
//
//	f.move(-255,255);
//    delay(2000);
//
//
//	f.move(0,0);
//	delay(2000);
}


