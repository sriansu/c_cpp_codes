#include <algorithm>
#include <iostream>
using std::swap;
void swap(long long *xp, long long *yp)
{
  long long temp = *xp;
  *xp = *yp;
  *yp = temp;
}

long long max_dot_product(long long a[], long long b[], int n)
{
  // write your code here
  long long result = 0;
  /* for (size_t i = 0; i < a.size(); i++) {
    result += ((long long) a[i]) * b[i];
  }*/
  for (int i = 0; i < n - 1; i++)
    for (int j = 0; j < n - i - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        swap(&a[j], &a[j + 1]);
      }
    }
  for (int i = 0; i < n - 1; i++)
    for (int j = 0; j < n - i - 1; j++)
    {
      if (b[j] > b[j + 1])
      {
        swap(&b[j], &b[j + 1]);
      }
    }
  for (int i = 0; i < n; i++)
  {
    result =result+ a[i] * b[i];
  }

  return result;
}
int main()
{
  int n;
  std::cin >> n;
  /*vector<long long> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }*/
  long long a[n], b[n];
  for(int i=0;i<n;i++)
  {
    std::cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    std::cin>>b[i];
  }

  std::cout << max_dot_product(a, b, n) << std::endl;
}
