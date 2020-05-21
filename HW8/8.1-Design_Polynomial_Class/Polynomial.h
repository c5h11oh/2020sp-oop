#pragma once

#include <cmath>
#include <algorithm>

class Polynomial {
public:
	Polynomial();
	Polynomial(const Polynomial& poly);
	Polynomial(double param);
	Polynomial(double* param, int size);
	~Polynomial();
	int mySize();
	friend double evaluate(const Polynomial& poly, const double& var);
	const Polynomial& operator =(const Polynomial& input);
	double& operator [](int input);
	friend const Polynomial operator +(const Polynomial& input1, const Polynomial& input2);
	friend const Polynomial operator -(const Polynomial& input1, const Polynomial& input2);
	friend const Polynomial operator *(const Polynomial& input1, const Polynomial& input2);
private:
	int size;
	double* param;
};

