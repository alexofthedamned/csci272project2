﻿// Alexander Stoyanov  - Project 2, Rational Numbers

#include <iostream>
#include <string>
#include "rational.h"
using namespace std;

int main(){
	rational a(3, 8);
	rational b(4, 9);
	rational x; 

	a.printFloat();
	cout << "\n"; 
	b.printFloat();
	cout << "\n\n";

	a.print();
	cout << " + ";
	b.print(); 
	cout << " = ";
	x = a.add(b); 
	x.printFloat(); 

	cout << "\n";

	a.print();
	cout << " - ";
	b.print();
	cout << " = ";
	x = a.sub(b);
	x.printFloat();

	cout << "\n";

	a.print();
	cout << " * ";
	b.print();
	cout << " = ";
	x = a.mul(b);
	x.printFloat();

	cout << "\n";

	a.print();
	cout << " / ";
	b.print();
	cout << " = ";
	x = a.div(b); //divide
	x.printFloat();

	cout << "\n\n";
}/*
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
