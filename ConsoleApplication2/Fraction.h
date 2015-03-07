#ifndef Fraction_H
#define Fraction_H

class Fraction
{
private:
	int nume;
	int deno;
public:
	Fraction(int numerator = 0, int denominator = 1);          // constructor
	~Fraction();         // destructor
	void SetNumerator(int numerator);
	void SetDenominator(int denominator);
	int getNumerator();
	int getDenominator();

	Fraction Add(Fraction);
	Fraction Subtract(Fraction);
	Fraction Multiply(Fraction);
	Fraction Divide(Fraction);

	Fraction operator+(Fraction);
	Fraction operator-(Fraction);
	Fraction operator*(Fraction);
	Fraction operator/(Fraction);
    void Print();
};
Fraction Read();
int gcd(int, int);
#endif

