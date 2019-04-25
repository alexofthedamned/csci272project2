#pragma once
#include<iostream>

class rational{
public:
	rational(int = 0, int = 1);//Constructor with default

	rational add(const rational &);
	rational sub(const rational &);
	rational mul(const rational &);
	rational div(const rational &);

	void print(void);
	void printFloat(void);
private:
	int d, n; //Denominator , numerator
	void reduce(void);
};
