#include <bits/stdc++.h>
using namespace std;

class Area
{
public:
    int a, b;

    Area(int x, int y)
    {
        a = x;
        b = y;
    }

    float returnArea()
    {
        return a * b;
    }
};

int main()
{
    float a, b, x;
    cin >> a >> b;
    Area obj = Area(a, b);
    x = obj.returnArea();
    cout << x << endl;
}