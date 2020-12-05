#include <bits/stdc++.h>
using namespace std;
class Employee
{
public:
    string names, address;
    int salary, year;
    Employee(string n, int y, string a)
    {
        names = n;
        year = y;
        address = a;
        cout << names << "\t\t" << year << "\t\t\t\t" << address << endl;
    }
};
int main()
{
    cout << "Name\t\t"
         << "Year of joinning\t\t"
         << "Address" << endl;
    Employee e1("Shamsu", 1992, "Chittagong"), e2("Soleman", 1994, "Chittagong"), e3("Kalam", 1990, "Dhaka");
}