#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> optimal_sequence(int n)
{
  vector<int> sequence;
  while (n >= 1)
  {
    sequence.emplace_back(n);
    if (n % 3 == 0)
    {
      n /= 3;
    }
    else if (n % 2 == 0)
    {
      n /= 2;
    }
    else
    {
      n = n - 1;
    }
  }
  reverse(sequence.begin(), sequence.end());
  return sequence;
}

vector<int> optimal_dp(int n)
{
  vector<int> sequence;
  int ways[n + 1];
  ways[0] = 0;
  for (int i = 1; i < n + 1; i++)
  {
    ways[i] = ways[i - 1] + 1;

    if (i % 2 == 0)
      ways[i] = min(1 + ways[i / 2], ways[i]);

    if (i % 3 == 0)
      ways[i] = min(1 + ways[i / 3], ways[i]);
  }

  int i = n;
  while (i > 1)
  {
    sequence.emplace_back(i);
    if (ways[i - 1] == ways[i] - 1)
      i = i - 1;

    else if (i % 2 == 0 && ways[i / 2] == ways[i] - 1)
      i = i / 2;

    else if (i % 3 == 0 && ways[i / 3] == ways[i] - 1)
      i = i / 3;
  }
  sequence.emplace_back(1);
  reverse(sequence.begin(), sequence.end());

  return sequence;
}

int main()
{
  int n;
  cin >> n;
  vector<int> sequence = optimal_dp(n);
  cout << sequence.size() - 1 << std::endl;
  for (size_t i = 0; i < sequence.size(); ++i)
  {
    cout << sequence[i] << " ";
  }
}
