#include <math.h>

class PrimeNumber {
public:
	int value;
	int get();
	PrimeNumber();
	PrimeNumber(int _value);
	PrimeNumber & operator++();
	PrimeNumber operator++(int);
	PrimeNumber & operator--();
	PrimeNumber operator--(int);

};

PrimeNumber::PrimeNumber() {
	PrimeNumber::value = 1;
}
PrimeNumber::PrimeNumber(int _value) :value(_value) {}
int PrimeNumber::get() {
	return PrimeNumber::value;
}
PrimeNumber& PrimeNumber::operator++() {
	int val = PrimeNumber::value;
	bool finded = false;
	while (!finded) {
		++val;
		finded = true;
		for (int i = 2; i <= int(sqrt(val)); ++i) {
			if (val%i == 0) {
				finded = false;
				break;
			}
		}
	}
	PrimeNumber::value = val;
	return *this;
}

PrimeNumber PrimeNumber::operator++(int) {
	int val = PrimeNumber::value;
	int valold = val;
	bool finded = false;
	while (!finded) {
		++val;
		finded = true;
		for (int i = 2; i <= int(sqrt(val)); ++i) {
			if (val%i == 0) {
				finded = false;
				break;
			}
		}
	}
	PrimeNumber::value = val;
	return PrimeNumber(valold);
}

PrimeNumber& PrimeNumber::operator--() {
	int val = PrimeNumber::value;
	bool finded = false;
	while (!finded) {
		--val;
		finded = true;
		for (int i = 2; i <= int(sqrt(val)); ++i) {
			if (val%i == 0) {
				finded = false;
				break;
			}
		}
	}
	PrimeNumber::value = val;
	return *this;
}

PrimeNumber PrimeNumber::operator--(int) {
	int val = PrimeNumber::value;
	int valold = val;
	bool finded = false;
	while (!finded) {
		--val;
		finded = true;
		for (int i = 2; i <= int(sqrt(val)); ++i) {
			if (val%i == 0) {
				finded = false;
				break;
			}
		}
	}
	PrimeNumber::value = val;
	return PrimeNumber(valold);
}