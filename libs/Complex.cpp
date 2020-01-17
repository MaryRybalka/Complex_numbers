#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(float r, float i) {
    real = r;
    imag = i;
}

Complex Complex::operator+(const Complex &obj) {
    Complex res;
    res.real = real + obj.real;
    res.imag = imag + obj.imag;
    return res;
}

Complex Complex::operator-(const Complex &number) {
    Complex res;
    res.real = real - number.real;
    res.imag = imag - number.imag;
    return res;
}

Complex Complex::operator*(const Complex &number) {
    Complex res;
    res.real = real * number.real - imag * number.imag;
    res.imag = real * number.imag + number.real * imag;
    return res;
}

Complex Complex::operator/(const Complex &number) {
    if ((number.imag == 0) and (number.real == 0)) {
        Complex res;
        res.imag = 0;
        res.real = 0;
        return res;
    }
    Complex res;
    res.real = (real * number.real + imag * number.imag) / (number.real * number.real + number.imag * number.imag);
    res.imag = (number.real * imag - real * number.imag) / (number.real * number.real + number.imag * number.imag);
    return res;
}

void Complex::print() {
    if (real == 0) {
        cout << imag << 'i' << endl;
    } else {
        cout << real;
        (imag > 0) ? cout << " + " << imag << 'i' << endl : cout << imag << 'i' << endl;
    }
}

void Complex::operator+=(const Complex &number) {
    real += number.real;
    imag += number.imag;
}

void Complex::operator-=(const Complex &number) {
    real -= number.real;
    imag -= number.imag;
}

bool Complex::operator==(const Complex &number) {
    return ((real == number.real) && (imag == number.imag));
}

bool Complex::operator!=(const Complex &number) {
    return ((real != number.real) || (imag != number.imag));
}

bool Complex::operator<=(const Complex &number) {
    return ((real <= number.real) && (imag <= number.imag));
}

bool Complex::operator>=(const Complex &number) {
    return ((number.real <= real) && (number.imag <= imag));
}

bool Complex::operator<(const Complex &number) {
    return (((real < number.real) && (imag <= number.imag)) || ((real == number.real) && (imag < number.imag)));
}

bool Complex::operator>(const Complex &number) {
    return (((number.real < real) && (number.imag <= imag)) || ((number.real == real) && (number.imag < imag)));
}

Complex &Complex::operator=(const Complex &number) {
    real = number.real;
    imag = number.imag;
    return *this;
}

float Complex::ret_real(const Complex &number) {
    return number.real;
}

float Complex::ret_imag(const Complex &number) {
    return number.imag;
}