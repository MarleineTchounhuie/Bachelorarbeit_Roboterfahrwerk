/*
 * Fahrwerk.h
 *
 *  Created on: 22.09.2022
 *      Author: Marleine T.
 */
#include <Arduino.h>
#ifndef FAHRWERK_H_
#define FAHRWERK_H_
#include "Motor.h"

class Fahrwerk
{
	Motor motor1 ,motor2 ;
    public:
    Fahrwerk(Motor m1, Motor m2);
	void move(int x,  int y);
};

#endif /* FAHRWERK_H_ */
