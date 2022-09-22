/*
 * Motor.h
 *
*  Created on: 22.09.2022
 *      Author: Marleine T.
 */

#ifndef MOTOR_H_
#define MOTOR_H_


class Motor
{
	/*
	* geschwindigkeitMax ist die maximale Geschwindigkeit des Motors
	*  Input1 und Input2 sind Eingänge des Motors 1
	*  enableA ist der DC Motor1 Jumper
	*/


    double geschwindigkeitMax;
    unsigned int input1 ;
	unsigned int input2 ;
	int enableA ;

	public :
	/*
	 *  Wir haben einen standard-Konstrukter mit Standartwerten
	 *  Ein integer Wert wird an der Methode move übergeben. Falls der Wert positiv ist , dreht
	 *  sich der Motor vorwärts. Falls der Wert negativ ist , dreht sich der Motor rückwärts.
	 *  Falls der Wert zwischen -70 und 70 liegt , dreht sich der Motor nicht.
	 *  Die Getter und Setter von allen Variablen wurden einfach generiert.
	 */

    Motor(int input1=4, int input2=8, int enableA=5, double geschwindigkeitMax=255.0);
	void move(int wert);
	unsigned int getInput1() const;
	void setInput1(unsigned int input1);
    unsigned int getInput2() const;
    void setInput2(unsigned int input2);
    int getEnableA() const ;
    void setEnableA(int enableA) ;
    double getGeschwindigkeitMax() const ;
    void setGeschwindigkeitMax(double geschwindigkeitMax);
};


#endif /* MOTOR_H_ */
