#pragma once

class Complex{
private:
    float real, imag;
public:
    explicit Complex(float r = 0, float i = 0);//explicit защищает от неявного вызова и неявного преобразования параметров (Clang-Tidy предложил :3)
    Complex operator +(const Complex  &obj);
    Complex operator -(const Complex &number);

    void operator +=(const Complex &number);
    void operator -=(Complex const &number);

    Complex operator *(const Complex &number);
    Complex operator /(const Complex &number);

    Complex& operator =(const Complex &number);

    bool operator ==(const Complex &number);
    bool operator !=(const Complex &number);

    bool operator <=(const Complex &number);
    bool operator >=(const Complex &number);

    bool operator <(const Complex &number);
    bool operator >(const Complex &number);
    void print();
    float ret_real(const Complex &number);
    float ret_imag(const Complex &number);
};