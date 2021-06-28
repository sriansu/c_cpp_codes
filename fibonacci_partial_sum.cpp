#include <iostream>
#include <vector>
using std::vector;

/*long long get_fibonacci_partial_sum_naive(long long a, long long b) {
    long long sum = 0;

    long long current = 0;
    long long next  = 1;

    for (long long i = 0; i <= b; ++i) {
        if (i >= a) {
            sum += current;
        }

        long long new_current = next;
        next = next + current;
        current = new_current;
    }

    return sum % 10;
}*/

long long fib_partial(long long a, long long b)
{
    // while (a >= 60 && b >= 60)

    long long sum = 0;
    long long f[60];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i < 60; i++)
    {
        f[i] = (f[i - 1] + f[i - 2]) % 10;
    }

    a = a % 60;
    b = b % 60;
    if (b < a)
        b = b + 60;

    for (int i = a; i <= b; i++)
    {
        sum = (sum + (f[i % 60])) % 10;
        // sum = sum % 10;
    }
    return sum % 10;
}

int main()
{
    long long a, b;
    std::cin >> a >> b;
    std::cout << fib_partial(a, b) << '\n';
}
