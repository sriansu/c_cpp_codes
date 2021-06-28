#include <iostream>

int get_change(int m)
{
  //write your code here
  int n = 0;
  while (m > 0)
  {
    if (m >= 10)
    {
      m = m - 10;
      n++;
    }
    if (m >= 5 && m <= 9)
    {
      n++;
      m = m - 5;
    }
    if (m > 0 && m < 5)
    {
      n = n + m;
      m = m - m;
    }
    if (m == 0)
    {
      break;
    }
  }
  return n;
}

int main()
{
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
