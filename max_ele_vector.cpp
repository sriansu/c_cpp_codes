#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    /* ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
    int n, q;
    long long ele;
    cin >> n;
    stack<long long> v;
    stack<long long> max;
    //stack<long long>::iterator it;
    for (int i = 0; i < n; i++)
    {
        cin >> q;
        if (q == 1)
        {
            cin >> ele;

            if (max.empty())
            {
                max.push(ele);
            }
            else
            {
                max.push(ele > max.top() ? ele : max.top());
            }
            v.push(ele);
        }
        else if (q == 2)
        {
            if (!max.empty())
            {
                max.pop();
                v.pop();
            }
        }
        else
        {
            cout << max.top() << "\n";
        }
    }
    return 0;
}
