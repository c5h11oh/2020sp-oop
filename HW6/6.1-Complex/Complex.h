#include <iostream>
#include <math.h>
using namespace std;

class Complex
{
public:
	double realValue, imaginaryValue;

	Complex();
	//~Complex();
	Complex(double r);
	//~Complex(double r);
	Complex(double r, double i);
	//~Complex(double r, double i);
	double real();
	double imag();
	double norm();
	friend double real(Complex c);
	friend double imag(Complex c);
	friend double norm(Complex c);	
	/*Complex operator+(Complex c);
	Complex operator-(Complex c);
	Complex operator*(Complex c);
	Complex operator/(Complex c);*/
	friend Complex operator+(double d, Complex c);
	friend Complex operator-(double d, Complex c);
	friend Complex operator*(double d, Complex c);
	friend Complex operator/(double d, Complex c);
	friend bool operator==(Complex c1, Complex c2);	
	friend ostream& operator<<(ostream &strm, const Complex &c);
	friend istream& operator>>(istream &strm,Complex &c);
};

Complex::Complex() {
	Complex::realValue = 0;
	Complex::imaginaryValue = 0;
}

Complex::Complex(double r) {
	Complex::realValue = r;
	Complex::imaginaryValue = 0;
}

Complex::Complex(double r, double i) {
	Complex::realValue = r;
	Complex::imaginaryValue = i;
}

double Complex::real() {
	return Complex::realValue;
}

double Complex::imag() {
	return Complex::imaginaryValue;
}

double Complex::norm() {
	return sqrt(pow(Complex::realValue,2)+ pow(Complex::imaginaryValue, 2));
}

double real(Complex c) {
	return c.realValue;
}

double imag(Complex c) {
	return c.imaginaryValue;
}

double norm(Complex c) {
	return sqrt(pow(c.realValue, 2) + pow(c.imaginaryValue, 2));
}

//Complex Complex::operator+(Complex c) {
//	double r = Complex::realValue + c.realValue;
//	double i = Complex::imaginaryValue + c.imaginaryValue;
//	return Complex(r, i);
//}
//
//Complex Complex::operator-(Complex c) {
//	double r = Complex::realValue - c.realValue;
//	double i = Complex::imaginaryValue - c.imaginaryValue;
//	return Complex(r, i);
//}
//
//Complex Complex::operator*(Complex c) {
//	const double &q = Complex::realValue;
//	const double &w = Complex::imaginaryValue;
//	const double &e = c.realValue;
//	const double &r = c.imaginaryValue;
//	double outReal = q * e - w * r;
//	double outImag = w * e + q * r;
//	return Complex(outReal, outImag);
//}
//
//Complex Complex::operator/(Complex c) {
//	const double &q = Complex::realValue;
//	const double &w = Complex::imaginaryValue;
//	const double &e = c.realValue;
//	const double &r = (-1)*c.imaginaryValue;
//	Complex multi = (*this)*c;
//	double deno = pow(e, 2) + pow(r, 2);
//	return Complex(multi.realValue/deno, multi.imaginaryValue/deno);
//}

Complex operator+(Complex d, Complex c) {
	double r = d.realValue + c.realValue;
	double i = d.realValue + c.imaginaryValue;
	return Complex(r, i);
}

Complex operator-(Complex d, Complex c) {
	double r = d.realValue - c.realValue;
	double i = d.realValue - c.imaginaryValue;
	return Complex(r, i);
}

Complex operator*(Complex d, Complex c) {
	//const double &a = d.realValue;
	//const double &b = d.imaginaryValue;
	//const double &c = c.realValue;
	//const double &d = c.imaginaryValue;
	double outReal = d.realValue * c.realValue - d.imaginaryValue * c.imaginaryValue;
	double outImag = d.imaginaryValue * c.realValue + d.realValue * c.imaginaryValue;
	return Complex(outReal, outImag);
}

Complex operator/(Complex d, Complex c) {
	double real = d.realValue*c.realValue + d.imaginaryValue*c.imaginaryValue;
	double imag = d.imaginaryValue*c.realValue - d.realValue*c.imaginaryValue;
	double deno = pow(c.realValue, 2) + pow(c.imaginaryValue, 2);
	return Complex(real / deno, imag / deno);
}

bool operator==(Complex c1, Complex c2) {
	return ((c1.realValue==c2.realValue)&&(c1.imaginaryValue==c2.imaginaryValue));
}
ostream& operator<<(ostream &strm, const Complex &c) {
	cout << c.realValue << " + " << c.imaginaryValue << "*i" << endl;
	return strm;
}
istream& operator>>(istream &strm, Complex &c) {
	char temp[10];
	strm >> temp[0] >> temp[1] >> c.realValue >> temp[2] >> c.imaginaryValue;
	return strm;
}