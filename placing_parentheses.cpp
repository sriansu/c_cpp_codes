#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int64_t get_maximum_value(string str)
{

  vector<int> number;
  vector<char> op;
  for (int p = 0; p < str.length(); p++)
  {
    if (p % 2 == 0)
    {
      number.emplace_back(str[p] - 48);
    }
    else
    {
      op.emplace_back(str[p]);
    }
  }

  int n = number.size();
  int64_t M[n][n], m[n][n];
  for (int i = 0; i < n; i++)
    M[i][i] = m[i][i] = number[i];

  int i, j, k, s;
  int64_t minimum = INT64_MAX;
  int64_t maximum = INT64_MIN;
  for (s = 1; s <= n - 1; s++)
  {
    for (i = 0; i < n - s; i++)
    {
      j = i + s;
      minimum = INT64_MAX;
      maximum = INT64_MIN;
      for (k = i; k < j; k++)
      {
        int64_t a, b, c, d;
        switch (op[k])
        {
        case '+':
          a = M[i][k] + M[k + 1][j];
          b = M[i][k] + m[k + 1][j];
          c = m[i][k] + M[k + 1][j];
          d = m[i][k] + m[k + 1][j];
          minimum = min({minimum, a, b, c, d});
          maximum = max({maximum, a, b, c, d});
          break;
        case '-':
          a = M[i][k] - M[k + 1][j];
          b = M[i][k] - m[k + 1][j];
          c = m[i][k] - M[k + 1][j];
          d = m[i][k] - m[k + 1][j];
          minimum = min({minimum, a, b, c, d});
          maximum = max({maximum, a, b, c, d});
          break;
        case '*':
          a = M[i][k] * M[k + 1][j];
          b = M[i][k] * m[k + 1][j];
          c = m[i][k] * M[k + 1][j];
          d = m[i][k] * m[k + 1][j];
          minimum = min({minimum, a, b, c, d});
          maximum = max({maximum, a, b, c, d});
          break;
        }
      }
      m[i][j] = minimum;
      M[i][j] = maximum;
    }
  }
  return M[0][n - 1];
}

int main()
{
  string s;
  cin >> s;
  int64_t output = get_maximum_value(s);
  cout << output << "\n";
}
