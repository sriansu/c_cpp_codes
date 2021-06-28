#include <iostream>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

long long gcd(long a, long long b) {
    int x = a >= b ? a : b;
    int y = a <= b ? a : b;
    while (x != 0) {
        int z = y % x;
        y = x;
        x = z;
    }
    return y;
}
long long lcm(long long a, long long b)
{
  return ((a*b)/gcd(a,b));
}


int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm(a, b) << std::endl;
  return 0;
}
