#include<iostream>
#include<string>
#include"lab2.h"
using namespace std;
void BMI::seth(float height)
	{
	h=height;
	}
void BMI::setm(float mass)
        {
        m=mass;
        }
float BMI::gh()
	{
	return h;
	}
float BMI::gm()
	{
        return m;
	}
float BMI::cul()
	{
	float B;
	gh();
	gm();
	h=h/100;
	B=m/(h*h);
	return B;
	}
string BMI::com(float a)
	{
	string c;
	if(a<15)
		c="Very severely underweight";
	else if(a<16)
		c="Severely underweight";
	else if(a<18.5)
		c="Underweight";
	else if(a<25)
		c="Normal";
	else if(a<30)
		c="Overweight";
	else if(a<35)
		c="Obese Class I(Moderately obese)";
	else if(a<40)
		c="Obese Class II(Severely obese)";
	else if(a>=40)
		c="Obese Class III(Very severely obese)";
	else
		c="error";
	return c;
	}
