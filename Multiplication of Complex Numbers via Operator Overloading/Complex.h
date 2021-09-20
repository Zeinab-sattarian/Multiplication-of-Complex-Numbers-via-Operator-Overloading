#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
public:
    Complex(double = 0.0, double = 0.0);
    Complex operator+(const Complex&) const;
    Complex operator-(const Complex&) const;
    Complex operator*(const Complex&) const;
    bool operator!=(const Complex &rhs) const;
    void print() const;

    friend std::ostream& operator<< (std::ostream&, Complex const&);

private:
    double real;
    double imaginary;
};

#endif
