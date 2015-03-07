#include <iostream>
#include "Fraction.h"
using namespace std;
int gcd(int, int); // function prototype which tells main that gcd exits
int main()
{  // declaration of the instances of class fraction
	Fraction obj1;
	Fraction obj2;
	Fraction obj3;
	Fraction obj4;
	Fraction obj5;
	Fraction obj6;
	Fraction obj7;
	cout << "The numerator is" << endl;
	obj1.getNumerator();
	cout << "The denonimator is" << endl;
	obj2.getDenominator();
	obj3 = obj1.Add(obj2);
	obj4 = obj1.Subtract(obj2);
	obj5 = obj1.Multiply(obj2);
	obj6 = obj1.Divide(obj2);
	cout << "addition:";
	obj3.Print();
	cout << "subtraction:";
	obj4.Print();
	cout << "multiplication:";
	obj5.Print();
	cout << "division:";
	obj5.Print();
	system("pause");
	return 0;
}