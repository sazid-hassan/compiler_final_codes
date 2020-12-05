#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    int length, breadth;
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int m, int n)
    {
        length = m;
        breadth = n;
    }
    Rectangle(int m)
    {
        length = m;
        breadth = m;
    }
    void print()
    {
        cout << "Area " << length * breadth << endl;
    }
};
int main()
{
    Rectangle obj1, obj2(3, 4), obj3(6);
    obj1.print();
    obj2.print();
    obj3.print();
}