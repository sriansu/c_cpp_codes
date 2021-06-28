#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define pi 3.1415926535
#define endl "\n"
#pragma GCC optimize("Ofast")
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define foi(a, b) for (int i = a; i < b; i++)
#define foll(a, b) for (ll i = a; i < b; i++)
#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b
using namespace std;

long long merge_and_count_split(vector<int> &arr, vector<int> &aux, size_t low, size_t mid, size_t high)
{
  int k = low, i = low, j = mid + 1;
  int inversionCount = 0;

  while (i <= mid && j <= high)
  {
    if (arr[i] <= arr[j])
    {
      aux[k++] = arr[i++];
    }
    else
    {
      aux[k++] = arr[j++];
      inversionCount += (mid - i + 1); // NOTE
    }
  }

  while (i <= mid)
    aux[k++] = arr[i++];

  for (int i = low; i <= high; i++)
    arr[i] = aux[i];

  return inversionCount;
}

long long get_number_of_inversions(vector<int> &a, vector<int> &b, size_t left, size_t right)
{
  long long number_of_inversions = 0;
  if (right == left)
  {
    return 0;
  }
  size_t mid = left + ((right - left) / 2);
  number_of_inversions += get_number_of_inversions(a, b, left, mid);
  number_of_inversions += get_number_of_inversions(a, b, mid + 1, right);
  number_of_inversions += merge_and_count_split(a, b, left, mid, right);
  return number_of_inversions;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  vector<int> b = a;
  cout << get_number_of_inversions(a, b, 0, a.size() - 1) << '\n';
}