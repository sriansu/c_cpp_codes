#include <iostream>

long long pisano_period(long long m)
{
    long long a = 0, b = 1, c = a + b;
    for (int i = 0; i < m * m; i++)
    {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1)
            return i + 1;
    }
}

long long fib(long long n, long long m)
{
    if (n <= 1)
        return n;
    else
    {
        long long sum = 0;
        long long f[n];
        f[0] = 0;
        f[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            f[i] = (f[i - 1] + f[i - 2]);
            f[i] = f[i] % m;
        }
        return f[n];
    }
}

int main()
{
    long long n, m;
    std::cin >> n >> m;
    if (n < m)
        std::cout << fib(n, m) << '\n';
    else
    {
        long long count = pisano_period(m);
        std::cout << fib(n % count, m);
    }
    return 0;
}
