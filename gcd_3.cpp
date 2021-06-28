#include <iostream>

int gcd (int a, int b)
{
    int x = a >= b ? a : b;
    int y = a <= b ? a : b;
    while (x != 0)
    {
        int z = y % x;
        y = x;
        x = z;
    }
    return y;
}
int gcd_true(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    if (a == b)
        return b;
    if (a > b)
        return gcd_true(a - b, b);
    else

        return gcd_true(a, a - b);
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    // std::cout << gcd_naive(a, b) << std::endl;
    std::cout << gcd(a, b) << std::endl;
    return 0;
}
