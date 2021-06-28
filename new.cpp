
/*  long long m = str1.length();
  long long n = str2.length();

  long long distance[m + 1][n + 1];

  for (long long i = 0; i < m + 1; i++)
  {
    distance[i][0] = i;
  }
  for (long long i = 0; i < n + 1; i++)
  {
    distance[0][i] = i;
  }
  long long i, j;
  for (j = 1; j < m + 1; j++)
  {
    for (i = 1; i < n + 1; i++)
    {

      if (str1[i - 1] == str2[j - 1])
      {
        distance[i][j] = min({distance[i][j - 1] + 1, distance[i - 1][j] + 1, distance[i - 1][j - 1]});
      }
      else
      {
        distance[i][j] = min({distance[i][j - 1] + 1, distance[i - 1][j] + 1, distance[i - 1][j - 1] + 1});
      }
    }
  }
  return distance[i - 1][j - 1];*/

/*  int i, j;
  for (i = 0; i <= n; i++)
  {
    for (j = 0; j <= W; j++)
    {
      if (i == 0 || j == 0)
        value[i][j] = 0;

      else
      {
        value[j][i] = value[j][i - 1];
        if (weights[i - 1] <= j)
        { //int ji=jeights[i];
          int val = value[j - weights[i - 1]][i - 1] + weights[i - 1];
          if (value[j][i] < val)
          {
            value[j][i] = val;
          }
        }
      }
    }
  }
  return value[j - 1][i - 1];*/