#include <algorithm>
#include <iostream>
#include <vector>
using std::vector;
using namespace std;

int get_majority_element(vector<int> &a, int left, int right)
{
    if (left == right)
        return -1;
    if (left + 1 == right)
        return a[left];
    int l = get_majority_element(a, left, (left + right - 1) / 2 + 1);
    int r = get_majority_element(a, (left + right - 1) / 2 + 1, right);

    int count1 = 0;
    for (int i = left; i < right; i++)
    {
        if (a[i] == l)
            count1 += 1;
    }
    if (count1 >(right - left) / 2)
        return l;

    int count2 = 0;
    for (int i = left; i < right; i++)
    {
        if (a[i] == r)
            count2 += 1;
    }
    if (count2 >(right - left) / 2)
        return r;

    //write your code here
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (size_t i = 0; i < a.size(); ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    cout << (get_majority_element(a, 0, a.size()) != -1) << endl;
    // cout << (get(a, 0, a.size()) != -1) << '\n';
}
