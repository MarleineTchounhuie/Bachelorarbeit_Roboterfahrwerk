/*
 * Motor.cpp
 *
 *  Created on: 22.09.2022
 *      Author: Marleine T.
 */

#include "Motor.h"
#include <Arduino.h>

/*
 Der Befehl pinMode(Pin,Modus) deklariert den digitalen Kanal auf einen Arduino-Board als Ausgang(OUTPUT)
*/
// Initialisierung von übergebenen Parametern


Motor::Motor(int input1, int input2,int enableA ,double geschwindigkeitMax)
{
	this->input1 = input1;
	this->input2 = input2;
	this->enableA = enableA ;
    this->geschwindigkeitMax = geschwindigkeitMax;

	pinMode (input1,OUTPUT);
	pinMode (input2,OUTPUT);
	pinMode(enableA,OUTPUT);
}


unsigned int Motor:: getInput1() const
	{
		return input1;
	}

void Motor:: setInput1(unsigned int input1)
	{
		this->input1 = input1;
	}

unsigned int Motor:: getInput2() const
	{
		return input2;
	}

void Motor:: setInput2(unsigned int input2)
	{
		this->input2 = input2;
	}
int Motor :: getEnableA() const
    {
		return enableA;
    }

void Motor::setEnableA(int enableA)
    {
		this->enableA = enableA;
    }

double Motor:: getGeschwindigkeitMax() const
    {
		return geschwindigkeitMax;
	}

void Motor::setGeschwindigkeitMax(double geschwindigkeitMax)
    {
		this->geschwindigkeitMax = geschwindigkeitMax;
	}
/*
 *  digitalWrite() bedeutet" schreib einen HIGH oder LOW Wert auf einen Digitalpin.
 *  Wenn der Pin mit pinMode()als Outputpin gesetzt wird, wird die Spannung auf den Wert 5V  für HIGH gesetzt, 0V für LOW.
 *  Die Funktion analogWrite() schreibt einen Analogwert (PWM-Welle) in einen Pin. Sie ist hier verwendet,
 *  um den Motor mit verschiedenen Geschwindigkeiten anzutreiben.
 */

void Motor::move(int wert)
{
	if (wert >= -70 && wert < 70) // Der Motor bleibt stehen
	 {
		 digitalWrite(input1 , LOW);
		 digitalWrite(input2 , LOW);
	 }
	else
	 {
		 if (wert < 0) // Der Motor dreht sich ruekwaerts
		 {
			 if (wert < -255) wert = -255;
			 digitalWrite(input1 , LOW);
			 digitalWrite(input2 , HIGH);
			 analogWrite(enableA , -wert);
		 }
		 else //Der Motor dreht sich ruekwaerts vorwaerts
		 {
			 if (wert > 255) wert = 255;
			 digitalWrite(input1 , HIGH);
			 digitalWrite(input2,LOW);
			 analogWrite(enableA , wert);
		 }
	 }
}



