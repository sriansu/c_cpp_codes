#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int get_change(int m)
{

  int coins[] = {1, 3, 4};
  vector<int> min_coins(m + 1);
  min_coins[0] = 0;
  int num_coins = 0;

  for (int i = 1; i <= m; i++)
  {
    min_coins[i] = INT_MAX;

    for (int j = 0; j < 3; j++)
    {
      if (i >= coins[j])
      {
        num_coins = min_coins[i - coins[j]] + 1;
        if (num_coins < min_coins[i])
        {
          min_coins[i] = num_coins;
        }
      }
    }
  }
  return min_coins[m];
}

int main()
{
  int m;
  cin >> m;
  cout << get_change(m) << '\n';
}
