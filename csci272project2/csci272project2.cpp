// csci272project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// I swear this codde is so bad.

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class rational{
public:
	rational(int = 0, int = 1);
	
	 rational add(const rational &);
	 rational sub(const rational &);
	 rational mul(const rational &);
	 rational div(const rational &);

	void print( void );
	void printFloat(void); 
private:
	int d, n; //Denominator , numerator
	void reduce(void);

	//static int gcd(int num, int dem); //maybe
};

 rational::rational(int num, int dem) {
	n = num;
	d = dem;
}//Default Case

 void rational::print(void) {
	 if (d == 0)
		 cout << "\nCANNOT DIVIDE BY ZERO (0)\n";
	 else if (n == 0)
		 cout << "0\n";
	 else
		cout << n << " / " << d;
 }//fix

 void rational::printFloat(void){
	 double decimal = static_cast<double>(n) / static_cast<double>(d); //type casting seems to have made this work.

	 if (d == 0)
		 cout << "Error: \nCANNOT DIVIDE BY ZERO (0)\n" << endl; 
	 else if (n == 0)
		cout << "0\n";
	 else 
		 cout << n << " / " << d  << " = " << decimal;
 }

 /*
 int rational::gcd(int num, int dem) {
	int a = abs(num); 
	int b = abs(dem);
	int gcd = 1; 

	for (int k = 1; k <= a && k <= b; k++) {
		if (a % k == 0 && b % k == 0)
			gcd = k;
	}
	
	return gcd; 
}
 *///rational::gcd

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

rational rational::add(const rational & a){
	rational x;
	x.n = a.n * d + a.d * n; // 
	x.d = a.d * d;
	if (d != 0)
		x.reduce();
	return x;
}

rational rational::sub(const rational & s ) {
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


int main()
{
 //   std::cout << "Hello World!\n"; 

	//int v, x, y, z;

	//cout << "Enter dem1";
	//cin >> v;
	//cout << "\n ed2";
	//	cin >> x;

	rational a(3, 8);
	rational b(4, 9);
	rational x; 

	a.printFloat();
	cout << endl; 
	b.printFloat();

	cout << "\n\n";

	a.print();
	cout << " + ";
	b.print(); 
	cout << " = ";
	x = a.add(b); 
	x.printFloat(); 

	cout << "\n\n";

	a.print();
	cout << " - ";
	b.print();
	cout << " = ";
	x = a.sub(b);
	x.printFloat();

	cout << "\n\n";


	a.print();
	cout << " * ";
	b.print();
	cout << " = ";
	x = a.mul(b);
	x.printFloat();

	cout << "\n\n";


	a.print();
	cout << " / ";
	b.print();
	cout << " = ";
	x = a.div(b); //divide
	//x.print();
	x.printFloat();


	cout << "\n\n";
}


/*
9.15 (Rat1ona1 Class) 
Create a class called Rational for performing arithmetic with fractions.

Write a program to test your class.
Use integer variables to represent the private data of the class-the numerator and the denominator.
Provide a constructor that enables an object of this class to be initialized when it's declared.
The constructor should contain default values in case no initializers are provided and should store
the fraction in reduced form. For example, the fraction
                                 2/4

would be stored in the object as 1 in the numerator and 2 in the denominator. Provide public
member functions that perform each of the following tasks:

a) Adding two Rational numbers. The result should be stored in reduced form .  [DONE]
b) Subtracting two Rational numbers. The result should be stored in reduced form.  [DONE]
c) Multiplying two Rational numbers. The result should be stored in reduced form.  [DONE]
d) Dividing two Rationaal numbers. The result should be stored in reduced form. [DONE]
e) Printing Rational numbers in the form a/b, where a is the numerator and b is the denominator. [DONE]
f) Printing Rational numbers in floating-point format.  [DONE]
*/
