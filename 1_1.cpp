#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string names;
    int rolls;
};

int main()
{
    student ob;
    ob.names = "Jamshed";
    ob.rolls = 2;

    cout << ob.names << endl
         << ob.rolls << endl;
}