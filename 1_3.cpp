#include <bits/stdc++.h>

using namespace std;

class Triangle
{
public:
    int area(int a, int b, int c)
    {
        float p = (a + b + c) / 2;
        cout << "perimeter: " << p << endl;
        float x = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "area " << x << endl;
    }
};

int main()
{

    Triangle t;
    t.area(3, 4, 5);
}