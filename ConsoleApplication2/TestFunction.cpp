#include <iostream>
#include "Fraction.h"

int main() {
	Fraction num = Read();
	Fraction num1(1,3);
	Fraction sum = num + num1;
	sum.Print();
	system("pause");
	return 0;
}