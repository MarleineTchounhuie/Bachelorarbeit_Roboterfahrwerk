/*
 * Fahrwerk.cpp
 *
 *  Created on: 22.09.2022
 *      Author: Marleine T.
 */
#include <Arduino.h>
#include "Fahrwerk.h"
#include "Motor.h"

Fahrwerk::Fahrwerk(Motor m1, Motor m2)
{
	this->motor1 = m1;
	this->motor2 = m2;
}


void Fahrwerk::move(int y, int x)
{

	if (y > 0 && x > 0)
	{
		motor1.move(255);
		motor2.move(255);
	}
	else if (y < 0 && x < 0)
	{
		motor1.move(-255);
		motor2.move(-255);
	}
	else if (y > 0 && x < 0)
	{
		motor1.move(255);
		motor2.move(-255);
	}
	else if (y < 0 && x > 0)
	{
		motor1.move(-255);
		motor2.move(255);
	}
	else
	{
		motor1.move(0);
		motor2.move(0);
	}
}
