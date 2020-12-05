#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    void print_function1()
    {
        cout << "This is a shape\n";
    }
};
class Rectangle : public Shape
{
public:
    void print_function2()
    {
        cout << "This is a rectangular shape\n";
    }
};
class Circle : public Shape
{
public:
    void print_function3()
    {
        cout << "This is a circular shape\n";
    }
};
class Square : public Rectangle
{
public:
    void print_function4()
    {
        cout << "Square is a rectangle\n";
    }
};
int main()
{
    Square obj;
    obj.print_function1();
    obj.print_function2();
}