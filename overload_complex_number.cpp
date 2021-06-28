//Operator Overloading

#include <iostream>

using namespace std;

class Complex
{
public:
    int real, img;
    void input(string s)
    {
        int v1 = 0;
        int i = 0;
        while (s[i] != '+')
        {
            v1 = v1 * 10 + s[i] - '0';
            i++;
        }
        while (s[i] == ' ' || s[i] == '+' || s[i] == 'i')
        {
            i++;
        }
        int v2 = 0;
        while (i < s.length())
        {
            v2 = v2 * 10 + s[i] - '0';
            i++;
        }
        real = v1;
        img = v2;
    }
};

//Overload operators + and << for the class complex
//+ should add two complex numbers as (real+ib) + (c+id) = (real+c) + i(img+d)
//<< should print real complex number in the format "real+ib"

Complex operator+(Complex &obj1, Complex &obj2)
{
    Complex t;
    t.real = obj1.real + obj2.real;
    t.img = obj1.img + obj2.img;
    return t;
}
ostream &operator<<(ostream &out, const Complex &obj)
{

    out << obj.real << "+i" << obj.img << endl;
    return out;
}

int main()
{

    Complex x, y;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    x.input(s1);
    y.input(s2);
    Complex z = x + y;
    cout << z << endl;
}