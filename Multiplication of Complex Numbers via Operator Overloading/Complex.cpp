#include<iostream>
#include "Complex.h"

using namespace std;

Complex::Complex(double realPart, double imaginaryPart) : real(realPart), imaginary(imaginaryPart) {

}
Complex Complex::operator+(const Complex &operand2) const {
  return Complex(real + operand2.real, imaginary + operand2.imaginary);
}

Complex Complex::operator-(const Complex &operand2) const {
  return Complex(real - operand2.real, imaginary - operand2.imaginary);
}

void Complex::print() const {
  cout << '(' << real << ", " << imaginary << ')';
}

// c
bool Complex::operator!=(const Complex &rhs) const {
    return real == rhs.real && imaginary == rhs.imaginary;
}

// b
Complex Complex::operator*(const Complex& rhs) const {
    return Complex(real * rhs.real - imaginary * rhs.imaginary, real * rhs.imaginary + rhs.real * imaginary);
}

// a
std::ostream& operator<<(std::ostream& out, Complex const& value) {
  out << '(' << value.real << ", " << value.imaginary << ')';
  return out;
}
