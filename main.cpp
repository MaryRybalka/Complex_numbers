#include <iostream>
#include "Complex.h"
class Complex;

using namespace std;

int main()
{   Complex c1(10, 5), c2(2, 4);
    Complex c3;
    cout << "+" << endl;
    c3 = c1 + c2;
    c3.print();
    cout << "-" << endl;
    c3 = c1 - c2;
    c3.print();

    cout << "*" << endl;
    c3 = c1*c2;
    c3.print();
    cout << "/" << endl;
    c3 = c1/c2;
    c3.print();

    cout << "=" << endl;
    c3 = c1;
    c3.print();

    cout << "+=" << endl;
    c1 += c2;
    c1.print();
    c1 = c3;
    cout << "-=" << endl;
    c1 -= c2;
    c1.print();

    c1 = c3;
    cout << "==" << endl;
    if (c3 == c2) cout << "True" << endl;
    else cout << "False"<< endl;
    cout << "!=" << endl;
    if (c3 != c2) cout << "True"<< endl;
    else cout << "False"<< endl;

    cout << "<=" << endl;
    if (c3 <= c2) cout << "True"<< endl;
    else cout << "False"<< endl;
    cout << ">=" << endl;
    if (c3 >= c2) cout << "True"<< endl;
    else cout << "False"<< endl;

    cout << "<" << endl;
    if (c3 < c2) cout << "True"<< endl;
    else cout << "False"<< endl;
    cout << ">" << endl;
    if (c3 > c2) cout << "True"<< endl;
    else cout << "False"<< endl;
}