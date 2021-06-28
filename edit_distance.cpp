#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int edit_distance(string str1, string str2)
{

  int m = str1.length();
  int n = str2.length();
  int distance[m + 1][n + 1];

  for (int i = 0; i <= m; i++)
  {
    for (int j = 0; j <= n; j++)
    {

      if (i == 0)
        distance[i][j] = j;

      else if (j == 0)
        distance[i][j] = i;

      else if (str1[i - 1] == str2[j - 1])
        distance[i][j] = min({distance[i][j - 1] + 1, distance[i - 1][j] + 1, distance[i - 1][j - 1]});

      else
        distance[i][j] = 1 + min({distance[i][j - 1], distance[i - 1][j], distance[i - 1][j - 1]});
    }
  }

  return distance[m][n];
}

int main()
{
  string str1;
  string str2;
  cin >> str1 >> str2;
  int moves = edit_distance(str1, str2);
  cout << moves << endl;
  return 0;
}
