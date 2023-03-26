#include "Rational.h"
#include <iostream>

using namespace std;



Rational::Rational() {
	numerator = 0;
	denominator = 0;
}

Rational::Rational(int x, int y) {
	numerator = x;
	denominator = y;
}

int Rational :: gcd(Rational R) {
	int hcf=1, l, s, t;
	l = R.denominator;
	s = R.numerator;
	if (s > l)
	{
		t = s;
		s = l;
		l = t;
	}
	if (s < 0)
	{
		s *= -1;
	}
	if (l < 0)
	{
		l *= -1;
	}

	for (int i = 1; i <= s/2; i++) 
	{
		if ((l % i == 0) && (s % i == 0)) 
		{
			hcf = i;
		}
	}
	return hcf;

}

Rational Rational::Add(const Rational& R) {
	int hcf;
	Rational ans;
	
	ans.setNumerator( (numerator * R.denominator) + (R.numerator * denominator));
	ans.setDenominator ( denominator * R.denominator) ;
	hcf = gcd(ans);
	ans.setDenominator (ans.getDenominator() / hcf);
	ans.setNumerator (ans.getNumerator() / hcf);
	return ans;
}

Rational Rational::Subtract(const Rational& R) {
	int hcf;
	Rational ans;

	ans.setNumerator((numerator * R.denominator) - (R.numerator * denominator));
	ans.setDenominator(denominator * R.denominator);
	hcf = gcd(ans);
	ans.setDenominator(ans.getDenominator() / hcf);
	ans.setNumerator(ans.getNumerator() / hcf);
	return ans;

}

Rational Rational::Multiply(const Rational& R) {
	Rational ans;
	int hcf;
	ans.setNumerator(numerator * R.numerator);
	ans.setDenominator(denominator * R.denominator);
	hcf = gcd(ans);
	ans.setDenominator(ans.getDenominator() / hcf);
	ans.setNumerator(ans.getNumerator() / hcf);
	return ans;

}

Rational Rational::Divide(const Rational& R) {
	Rational ans;
	int hcf;
	ans.setNumerator(numerator * R.denominator);
	ans.setDenominator(denominator * R.numerator);
	hcf = gcd(ans);
	ans.setDenominator(ans.getDenominator() / hcf);
	ans.setNumerator(ans.getNumerator() / hcf);
	return ans;

}

void Rational::PrintRationalFormat() {
	if (denominator == 0)
	{
		cout << "OUTPUT: Error, Invalid Fraction!\n";
	}
	else if(numerator==0)
	{
		cout << "OUTPUT: 0\n";
	}
	else
	{
		cout << "OUTPUT Rational Form: " << numerator << "/" << denominator << endl;
	}
	
}

void Rational::PrintFloatFormat(void) {
	float x = static_cast<float>(numerator), y= static_cast<float>(denominator);
	cout << "OUTPUT Float Form: " << (x / y) << endl;
}