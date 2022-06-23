#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define pi 3.1415926535
#define endl "\n"
#pragma GCC optimize("Ofast")
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define foi(a, b) for (int i = a; i < b; i++)
#define foll(a, b) for (ll i = a; i < b; i++)
#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b
using namespace std;

class abs_emp
{

    virtual void askforp() = 0;
};

class Employee : abs_emp // inheritance, emp inherits from abs_emp
{
private:
    string company;
    int age;

protected:
    string name;

public:
    void setname(string n)
    {
        if (n.length() > 1)
            name = n;
    }
    string getname()
    {
        return name;
    }

    void setcomp(string n)
    {
        if (n.length() > 1)
            company = n;
    }
    string getcomp()
    {
        return company;
    }

    void setage(int a)
    {
        age = a;
    }
    int getage()
    {
        return age;
    }

    void emp_intro()
    {
        cout << "Name -" << name << endl;
        cout << "Age -" << age << endl;
        cout << "Company -" << company << endl;
    }

    void askforp()
    {
        // some logic

        if (age > 30)
            cout << name << " got promoted" << endl;
        else
            cout << name << " no promo" << endl;
    }

    Employee(string n, string c, int a)

    {
        name = n;
        company = c;
        age = a;
    }
    virtual void work()
    {
        cout << name << " checks email" << endl;
    }
};

class sde : public Employee
{
public:
    string lang;

    sde(string n, string c, int a, string l) : Employee(n, c, a)

    {
        lang = l;
    }
    void fix()
    {
        cout << name << " fixed " << getcomp() << "'s bug using " << lang << endl; // could use name and didn't need to use getname cuz it was protected and not private
    }
    void work()
    {
        cout << name << " writes and debugs " << lang << " code" << endl;
    }
};

class teacher : public Employee
{
public:
    string sub;
    void lesson()
    {
        cout << name << " teaches " << sub << endl;
    }
    teacher(string n, string c, int a, string ss) : Employee(n, c, a)
    {
        sub = ss;
    }
    void work()
    {
        cout << name << " recites documentation of " << sub << " in gibberish" << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Employee d1("Aman", "Random", 20);

    // e1.emp_intro();
    // e1.setname("Sri");
    // cout << e1.getname() << endl;
    // e1.askforp();

    // sde s1= sde(params);
    sde s1("Aman", "Random", 20, "CPP");
    s1.fix();
    s1.askforp();

    teacher t1("Tapan", "BIT", 90, "JABA");
    t1.lesson();
    t1.askforp();
    // polymorphism uses- when a parent class reference is used to refer a child class object.
    Employee *e1 = &s1; // a pointer of base class holds reference to derived class obj
    Employee *e2 = &t1;

    e1->work(); // this works cuz employee class work method is virtual
    e2->work();
    return 0;
}