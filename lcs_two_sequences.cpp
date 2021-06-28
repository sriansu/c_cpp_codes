#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lcs2(vector<int> &a, vector<int> &b)
{
  int lcs[a.size() + 1][b.size() + 1];

  for (int i = 0; i <= a.size(); i++)
  {
    for (int j = 0; j <= b.size(); j++)
    {
      if (i == 0 || j == 0)
        lcs[i][j] = 0;

      else if (a[i - 1] == b[j - 1])
        lcs[i][j] = lcs[i - 1][j - 1] + 1;

      else
        lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
    }
  }
  return lcs[a.size()][b.size()];
}

int main()
{
  size_t n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  size_t m;
  cin >> m;
  vector<int> b(m);
  for (size_t i = 0; i < m; i++)
  {
    cin >> b[i];
  }

  cout << lcs2(a, b) << std::endl;
}
