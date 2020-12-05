#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    float area(int a, int b)
    {
        return a * b;
    }
};

int main()
{
    Rectangle rec1, rec2;

    float area1 = rec1.area(4, 5), area2 = rec2.area(5, 8);
    cout << area1 << " " << area2 << endl;
}