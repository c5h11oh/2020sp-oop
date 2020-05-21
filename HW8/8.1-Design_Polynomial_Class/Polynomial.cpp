#include "Polynomial.h"
using namespace std;

Polynomial::Polynomial() {
	size = 1;
	param = new double[1]{ 0 };
}

Polynomial::Polynomial(const Polynomial& poly) {
	size = poly.size;
	param = new double[size];
	for (int i = 0; i < size; ++i)
		this->param[i] = poly.param[i];
}

Polynomial::Polynomial(double param) {
	size = 1;
	this->param = new double[1]{ param };
}

Polynomial::Polynomial(double* param, int size) {
	this->size = size;
	this->param = new double[size];
	for (int i = 0; i < size; ++i) {
		this->param[i] = param[i];
	}
}

Polynomial::~Polynomial() {
	delete[] param;
}

int Polynomial::mySize() {
	return this->size;
}



const Polynomial& Polynomial::operator =(const Polynomial& input) {
	if (this != &input) {
		size = input.size;
		delete[] param;
		param = new double[size];
		for (int i = 0; i < size; ++i)
			this->param[i] = input.param[i];
	}
	return (*this);
}

double& Polynomial::operator [](int input) {
	return param[input];
}

const Polynomial operator +(const Polynomial& input1, const Polynomial& input2) {
	int size = max(input1.size, input2.size);
	double* param;
	param = new double[size];
	for (int i = 0; i < size; ++i)
		param[i] = 0;
	for (int i = 0; i < input1.size; ++i)
		param[i] += input1.param[i];
	for (int i = 0; i < input2.size; ++i)
		param[i] += input2.param[i];
	return Polynomial(param, size);
}

const Polynomial operator -(const Polynomial& input1, const Polynomial& input2) {
	int size = max(input1.size, input2.size);
	double* param;
	param = new double[size];
	for (int i = 0; i < size; ++i)
		param[i] = 0;
	for (int i = 0; i < input1.size; ++i)
		param[i] += input1.param[i];
	for (int i = 0; i < input2.size; ++i)
		param[i] -= input2.param[i];
	return Polynomial(param, size);
}

const Polynomial operator *(const Polynomial& input1, const Polynomial& input2) {
	int size = input1.size + input2.size - 1;
	double* param = new double[size];
	for (int i = 0; i < size; ++i)
		param[i] = 0;
	for (int i = 0; i < input1.size; ++i) {
		for (int j = 0; j < input2.size; j++) {
			param[i + j] += input1.param[i] * input2.param[j];
		}
	}
	return Polynomial(param, size);
}

double evaluate(const Polynomial& poly, const double& var) {
	double sum = 0;
	for (int i = 0; i < poly.size; ++i)
		sum += poly.param[i] * pow(var, i);
	return sum;
}