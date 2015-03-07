#include <iostream>
using namespace std;
#include "Fraction.h"

//constructor
Fraction::Fraction(int numerator, int denominator)
{
	nume = numerator;
	deno = denominator;

}

Fraction::~Fraction()
{

}
// gets the numerator
int Fraction::getNumerator()
{
	return nume;
}

// set numerator 
void Fraction::SetNumerator(int nume)
{
	this->nume = nume;
}
// get the denominator
int Fraction::getDenominator()
{
 return nume;
}
//sets the denominator
void Fraction::SetDenominator(int deno)
{
	this->deno = deno;
}

// Functions
// adds the fraction and gives the answer as a fraction
Fraction Fraction::Add(Fraction num)
{
	return Fraction(nume*num.deno + deno*num.nume, deno*num.deno);
}
// subtract two fraction numbers
Fraction Fraction::Subtract(Fraction num)
{
	return Fraction(nume*num.deno - deno*num.nume, deno*num.deno);
}
// multiplies two fractions
Fraction Fraction::Multiply(Fraction num)
{
	return Fraction(nume*num.nume, deno*num.deno);
}
// divides two fraction numbers
Fraction Fraction::Divide(Fraction num)
{
	return Fraction(nume*num.deno, deno*num.nume);
}

// Function for printing simplified fractions and wries in standard form
void Fraction::Print() {
	int x = nume;
	int y = deno;
	int i=0;
	int rem = x%y;//remainder
	int gcd1 = gcd(x, y);//gcd for numerator & denominator
	int gcd2 = gcd(rem, y);//gcd for remainder and denominator


	if (x > y || (-1)*x > y || x > (-1)*y)// for counting how many times the denominator goes to te numerator if it an improper fraction
	{
		if (x < 0)
		{
			do
			{
				x += y;
				i++;
			} while (x < 0);
		}

		else
		{
			do
			{
				x -= y;
				i++;
			} while (x > 0);
		}
	}

	if ((i - 1) == 0)
	{

		cout << x / gcd1 << "/" << y / gcd1 << endl;
	}//it will print this,if it is not a mixed fraction
	else{

		cout << i - 1 << " " << rem / gcd2 << "/" << y / gcd2 << endl;
	}
}

//Recursive function computes the greatest common divisor between two integer numbers
int gcd(int x, int y)
{
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

// The program which implements addition as a member function
Fraction Fraction::operator+(Fraction num)
{
	return Fraction(nume*num.deno + deno*num.nume, deno*num.deno);
}

// The operator which implements subtraction as a member function

Fraction Fraction::operator-(Fraction num)
{
	return Fraction(nume*num.deno - deno*num.nume, deno*num.deno);
}

// The operator which implements multiplication as a member function

Fraction Fraction::operator*(Fraction num)
{
	return Fraction(nume*num.nume, deno*num.deno);
}

// The operator which implements division as a member function

Fraction Fraction::operator/(Fraction num)
{
	return Fraction(nume*num.deno, deno*num.nume);
}
// This function reads the numerator and denominator entered from the keyboard
Fraction Read()
{
	int nume, deno,mixed;
	std::cout << "Enter the whole number part" << endl;
	std::cin >> mixed;
	std::cout << "Enter the numerator" << endl;
	std::cin >> nume;
	std::cout << "Enter the denominator" << endl;
	std::cin >> deno;
	return Fraction(mixed*deno + nume, deno);

}