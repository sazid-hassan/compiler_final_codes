#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    int length, breadth;
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    Rectangle()
    {
    }
    void area()
    {
        cout << length * breadth << "\t";
    }
    void pmtr()
    {
        cout << 2 * (length + breadth) << endl;
    }
};
class Square : public Rectangle
{
public:
    int s;
    Square(int sd)
    {
        s = sd;
    }
    void area()
    {
        cout << s * s << "\t";
    }
    void pmtr()
    {
        cout << 4 * s << endl;
    }
};
int main()
{
    Rectangle objct(3, 4);
    Square objct1(6);
    objct.area();
    objct.pmtr();
    objct1.area();
    objct1.pmtr();
}