#include <bits/stdc++.h>
using namespace std;

class parent
{
public:
    void display()
    {
        cout << "This is parent class" << endl;
    }
};

class child : public parent
{
public:
    void display1()
    {
        cout << "This is child class" << endl;
    }
};

int main()
{
    parent obj;
    child obj1;
    obj.display();
    obj1.display1();
    obj1.display();
}