#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    int a, b, c, d;

    int add()
    {

        cout << "Enter real and imaginary parts respectively to add:" << endl;
        cin >> a >> b >> c >> d;
        cout << "The addition is: " << a + c << "+"
             << "(" << b + d << ")i" << endl;
    }

    int multiply()
    {
        cout << "Enter real and imaginary parts respectively To multiply:" << endl;
        cin >> a >> b >> c >> d;
        cout << "The Mul is: " << (a * c - b * d) << "+"
             << "(" << b * c + a * d << ")i" << endl;
    }

    int sub()
    {
        cout << "Enter real and imaginary parts respectively to add:" << endl;
        cin >> a >> b >> c >> d;
        cout << "The addition is: " << a - c << "+"
             << "(" << b - d << ")i" << endl;
    }
};

int main()
{
    Complex object;
    object.add();
    object.multiply();
    object.sub();
}