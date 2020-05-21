#include "Fraction.h"

void Fraction::setNumerator(int nu)
{
	Fraction::numerator = nu;
}

void Fraction::setDenominator(int de)
{
	Fraction::denominator = de;
}

void Fraction::getDouble()
{
	if (Fraction::numerator % Fraction::denominator == 0)
		cout << Fraction::numerator/Fraction::denominator << endl;
	else {
		cout << fixed << std::setprecision(6) << (double)Fraction::numerator / (double)Fraction::denominator << endl;
		//cout.unsetf(ios::fixed);
	}
}

void Fraction::outputReducedFraction()
{
	if (Fraction::numerator % Fraction::denominator != 0) {
		int m = Fraction::numerator, n = Fraction::denominator;
		while (n != 0) {
			int t = m % n;
			m = n;
			n = t;
		}
		cout << Fraction::numerator / m << "/" << Fraction::denominator / m << endl;
	} else cout << Fraction::numerator / Fraction::denominator << endl;
}
