#pragma once
#include <iostream>

using namespace std;

class Rational {
private:
	int numerator;
	int denominator;

public:
	Rational();
	Rational(int,int);
	int gcd(Rational);
	Rational Add(const Rational&);//add two Rational numbers. The result should be stored in reduced form
	Rational Subtract(const Rational&);//subtracts two Rational numbers. The result should be stored inreduced form
	Rational Multiply(const Rational&);//multiplies two Rational numbers. The result should be stored in reduced form
	Rational Divide(const Rational&);//divides two Rational numbers. The result should be stored in reduced form
	void PrintRationalFormat();//Printing Rational numbers in the form a/b, where a is the numeratorand b is the denominator
	void PrintFloatFormat(void);//Prints Rational numbers in floating-point format

	int getNumerator() {
		return this->numerator;
	}
	void setNumerator(int numerator) {
		this->numerator = numerator;
	}


	int getDenominator() {
		return this->denominator;
	}
	void setDenominator(int denominator) {
		this->denominator = denominator;
	}
};