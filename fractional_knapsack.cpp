#include <iostream>
#include <vector>

/*using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;

  // write your code here

  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}*/

int main()
{
  struct sack
  {
    double weight, profit, ratio;
  };
  double capacity, amount = 0;
  int i, n;
  std::cin >> n >> capacity;
  struct sack s[n];
  struct sack s2;
  for (i = 0; i < n; i++)
  {
    // scanf("%lf %lf", &s[i].profit, &s[i].weight);
    std::cin >> s[i].profit >> s[i].weight;
  }

  for (i = 0; i < n; i++)
  {
    s[i].ratio = s[i].profit / s[i].weight;
  }

  for (i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
      if (s[i].ratio < s[j].ratio)
      {
        s2 = s[i];
        s[i] = s[j];
        s[j] = s2;
      }

  for (i = 0; i < n; i++)
  {
    if (s[i].weight > capacity)
      break;

    else
    {
      amount = amount + s[i].profit;
      capacity = capacity - s[i].weight;
    }
  }
  if (i < n)
    amount = amount + (s[i].ratio * capacity);
  printf("%.4f", amount);
  return 0;
}
