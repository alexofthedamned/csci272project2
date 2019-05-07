#include "rational.h"
#include <iostream>
using namespace std; 

rational::rational(int num, int dem) {
	n = num;
	d = dem;
}//Constructor

void rational::print(void) {
	if (d == 0)
		cout << "\nCANNOT DIVIDE BY ZERO (0)\n";
	else if (n == 0)
		cout << "0\n";
	else
		cout << n << "/" << d;
}

void rational::printFloat(void) {
	double decimal = static_cast<double>(n) / static_cast<double>(d); //type casting seems to have made this work.

	if (d == 0)
		cout << "Error: \nCANNOT DIVIDE BY ZERO (0)\n" << endl;
	else if (n == 0)
		cout << "0\n";
	else
		cout << n << "/" << d << " = " << decimal;
}


void rational::reduce() {
	int num = n < 0 ? -n : n;
	int dem = d;
	int largest = num > dem ? num : dem;

	int gcd = 0;

	for (int i = largest; i >= 2; i--)
		if (n % i == 0 && d % i == 0) {
			gcd = i;
			break;
		}// Find GCD
	if (gcd != 0) {
		n /= gcd;
		d /= gcd;
	}//Reduce by GCD 
}

rational rational::add(const rational & a) {
	rational x;
	x.n = a.n * d + a.d * n; // 
	x.d = a.d * d;
	if (d != 0)
		x.reduce();
	return x;
}

rational rational::sub(const rational & s) {
	rational x;
	x.n = s.d * n - s.n * d; // 
	x.d = s.d * d;
	if (d != 0)
		x.reduce();
	return x;
}

rational rational::mul(const rational& m) {
	rational x;
	x.n = m.n * n;
	x.d = m.d * d;
	if (d != 0)
		x.reduce();
	return x;
}

rational rational::div(const rational& q) {
	rational x;
	x.n = q.n * d; // 
	x.d = q.d * n;
	if (d != 0)
		x.reduce();
	return x;
}

