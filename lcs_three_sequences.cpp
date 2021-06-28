#include <iostream>

#include <bits/stdc++.h>
using namespace std;

int lcs3(vector<int> &a, vector<int> &b, vector<int> &c)
{
  int lcs[a.size() + 1][b.size() + 1][c.size() + 1];

  for (int i = 0; i <= a.size(); i++)
  {
    for (int j = 0; j <= b.size(); j++)
    {
      for (int k = 0; k <= c.size(); k++)
      {
        if (i == 0 || j == 0 || k == 0)
          lcs[i][j][k] = 0;

        else if (a[i - 1] == b[j - 1] && a[i - 1] == c[k - 1])
          lcs[i][j][k] = lcs[i - 1][j - 1][k - 1] + 1;

        else
          lcs[i][j][k] = max(max(lcs[i - 1][j][k], lcs[i][j - 1][k]), lcs[i][j][k - 1]);
      }
    }
  }
  return lcs[a.size()][b.size()][c.size()];
}

int main()
{
  size_t an;
  cin >> an;
  vector<int> a(an);
  for (size_t i = 0; i < an; i++)
  {
    cin >> a[i];
  }
  size_t bn;
  cin >> bn;
  vector<int> b(bn);
  for (size_t i = 0; i < bn; i++)
  {
    cin >> b[i];
  }
  size_t cn;
  cin >> cn;
  vector<int> c(cn);
  for (size_t i = 0; i < cn; i++)
  {
    cin >> c[i];
  }
  cout << lcs3(a, b, c) << "\n";
}
