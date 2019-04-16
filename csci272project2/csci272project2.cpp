// csci272project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//








#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class rational{
public:
	rational();
	rational(int, int); 

	void setNum(int);
	void setDem(int); 

	void add(const rational &);
	void sub(const rational &);
	void mul(const rational &);
	void div(const rational &);

	void Print();
	void printfloat(); 
private:
	int d, n; 
	static int gcd(int num, int dem); 
};

 rational::rational(int num, int dem) {
	n = 0;
	d = 1;
}

 void rational::Print(int num, int dem) {
	 cout << num << " / " << dem << endl;
 }

 void rational::PrintFloat(int num, int dem){
	 float decimal = num / dem; 

	 if (dem == 0)
		 cout << "Error" << endl; 
	 else {
		 cout << num << " / " << dem  << " = " << decimal;
	 }
 }

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

 void rational::reduce() {
	 int n = num < 0 ? -numerator : numerator;
	 int d = den;
	 int largest = n > d ? n : d;

	 int gcd = 0;

	 for (int i = largest; i >= 2; i--)
		 if (numerator % i == 0 && denominator % i == 0) {
			 gcd = i;
			 break;
		 }
	 if (gcd != 0) {
		 numerator /= gcd;
		 denominator /= gcd;
	 }
 }
 
int rational::add(int n, int d) {
	int num, dem, sum;
	return num, dem; 
}

int rational::mul(int n, int d, int nm, int dm) {
	int num, dem, sum;

	num = n * nm;
	dem = d * dm; 


	return num, dem;
}
 

int main()
{
    std::cout << "Hello World!\n"; 
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

a) Adding two Rational numbers. The result should be stored in reduced form.
b) Subtracting two Rational numbers. The result should be stored in reduced form.
c) Multiplying two Rational numbers. The result should be stored in reduced form.
d) Dividing two Rationaal numbers. The result should be stored in reduced form.
e) Printing Rational numbers in the form a/b, where a is the numerator and b is the denominator.
f) Printing Rational numbers in floating-point format.
*/


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
