#include <bits/stdc++.h>
using namespace std;

class Bank
{
public:
    int BalanceGet()
    {
        return 0;
    }
};

class Bank_A : public Bank
{
    int amount;

public:
    Bank_A(int a)
    {
        amount = a;
    }

    int getBalance()
    {
        return amount;
    }
};

class Bank_B : public Bank
{
    int amount;

public:
    Bank_B(int a)
    {
        amount = a;
    }

    int BalanceGet()
    {
        return amount;
    }
};

class Bank_C : public Bank
{
    int amount;

public:
    Bank_C(int a)
    {
        amount = a;
    }

    int BalanceGet()
    {
        return amount;
    }
};

int main()
{
    Bank_A a(1000);
    Bank_B b(1500);
    Bank_C c(2000);
    cout << a.BalanceGet() << endl;
    cout << b.BalanceGet() << endl;
    cout << c.BalanceGet() << endl;
    return 0;
}