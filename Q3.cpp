#include "Rational.h"
//#include "Rational.cpp"
#include <iostream>

using namespace std;

int main()
{
	int x, x1, y, y1;
	cout << "-------------------------------------\n";
	cout << "Note: If denominator is zero then it \nis an invalid function!\n";
	cout << "-------------------------------------\n";
	cout << "Enter first fraction numerator: \n";
	cin >> x;
	cout << "-------------------------------------\n";
	cout << "Enter first fraction denominator: \n";
	cin >> y;
	while (y == 0)
	{
		cout << "Error, Renter Value: ";
		cin >> y;
	}
	cout << "-------------------------------------\n";
	cout << "Enter second fraction numerator: \n";
	cin >> x1;
	cout << "-------------------------------------\n";
	cout << "Enter second fraction denominator: \n";
	cin >> y1;
	while (y1 == 0)
	{
		cout << "Error, Renter Value: ";
		cin >> y1;
	}
	cout << "-------------------------------------\n";
	Rational R1(x,y), R2(x1,y1), R;

	cout << "-------------------------------------\n";
	R1.PrintRationalFormat();
	R1.PrintRationalFormat();
	cout << "-------------------------------------\n";
	R2.PrintRationalFormat();
	R2.PrintRationalFormat();
	cout << "-------------------------------------\n\n";

	cout << "-------------------------------------\n\n";
	cout << "             ADDITION\n";
	cout << "-------------------------------------\n\n";
	R=R1.Add(R2);
	R.PrintRationalFormat();
	R.PrintFloatFormat();
	cout << "-------------------------------------\n\n";

	cout << "-------------------------------------\n\n";
	cout << "            SUBTRACTION\n";
	cout << "-------------------------------------\n\n";
	R = R1.Subtract(R2);
	R.PrintRationalFormat();
	R.PrintFloatFormat();
	cout << "-------------------------------------\n\n";

	cout << "-------------------------------------\n\n";
	cout << "           MULTIPLICATION\n";
	cout << "-------------------------------------\n\n";
	R = R1.Multiply(R2);
	R.PrintRationalFormat();
	R.PrintFloatFormat();
	cout << "-------------------------------------\n\n";

	cout << "-------------------------------------\n\n";
	cout << "             DIVISION\n";
	cout << "-------------------------------------\n\n";
	R = R1.Divide(R2);
	R.PrintRationalFormat();
	R.PrintFloatFormat();
	cout << "-------------------------------------\n\n";

	return 0;
}