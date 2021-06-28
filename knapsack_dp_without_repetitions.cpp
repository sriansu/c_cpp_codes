#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int optimal_weight(int W, vector<int> weights)
{
  int n = weights.size();
  // int value[W + 1][n + 1];
  vector<vector<int>> value(W + 1, vector<int>(n + 1));
  // for (int i = 0; i < W + 1; i++)
  //   value[i][0] = 0;
  // for (int i = 0; i < n + 1; i++)
  //   value[0][i] = 0;

  int i, w, val;
  for (i = 1; i <= n; i++)
  {
    for (w = 1; w <= W; w++)
    {
      value[w][i] = value[w][i - 1];
      if (weights[i - 1] <= w)
      {
        val = value[w - weights[i - 1]][i - 1] + weights[i - 1];
        if (val > value[w][i])
        {
          value[w][i] = val;
        }
      }
    }
  }
  return value[w - 1][i - 1];
}

int main()
{
  int n, W;
  cin >> W >> n;
  vector<int> j(n);
  for (int i = 0; i < n; i++)
  {
    cin >> j[i];
  }
  cout << optimal_weight(W, j) << '\n';
}
