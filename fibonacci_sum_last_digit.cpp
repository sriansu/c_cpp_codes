#include <iostream>

long long fibonacci_sum(long long n)
{
    // write your code here
    if (n < 1)
        return 0;
    n = n % 60; //the remainder repeats itself after 60 thats why
    long long f[n];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    long long sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + f[i];
    }
    return sum % 10;
}

int main()
{
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum(n);
}
