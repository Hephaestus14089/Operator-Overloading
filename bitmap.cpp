#include<iostream>
#include<cmath>
#include"bitmap.h"
using namespace std;

Complex::Complex() {

	real = 0;
    img = 0;
}
	
Complex::Complex(int real, int img) {

	this->real=real;
	this->img=img;
}
	
void Complex::Accept() {

	cout << "Real: ";
	cin >> this->real;

	cout << "Imaginary: ";
	cin >> this->img;
}

void Complex::Display() {

	cout << this->real;

	if (this->img != 0) {

		if (this->img > 0) {
			cout << " + ";
			cout << this->img;
		}
		else if (this->img < 0) {
			cout << " - ";
			cout << (-this->img);
		}

		cout << "i";
	}

	cout << endl;
}
	
Complex Complex::operator+(Complex &complex) {

	Complex result;

	result.real = this->real + complex.real;
	result.img = this->img + complex.img;

	return result;
}
	
Complex Complex::operator-(Complex &complex) {

	Complex result;

	result.real = this->real - complex.real;
	result.img = this->img - complex.img;

	return result;
}

Complex Complex::operator++() {

	Complex result;

	result.real = ++this->real;
	result.img = ++this->img;

	return result;
}
	
Complex Complex::operator++(int) {

	Complex result;

	result.real = this->real++;
	result.img = this->img++;

	return result;
}

bool Complex::operator==(Complex &complex) {

	return (this->real == complex.real && this->img == complex.img);
}
