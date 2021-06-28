#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int m, n;
vector<int> prime1;
vector<int> prime2;
void factors1(int y)
{
    vector<int> factor;

    int i = 1;
    while (i * i <= y)
    {
        if (y % i == 0)
        {
            factor.emplace_back(i);

            if (y / i != i)
            {
                factor.emplace_back(y / i);
            }
        }
        i++;
    }

    int size = factor.size();
    int max_index1 = -1, max_index2 = -1;
    for (i = 0; i < size; i++)
    {
        if (max_index1 == -1 || (factor[i] > factor[max_index1]))
            max_index1 = i;
    }

    for (i = 0; i < size; i++)
    {
        if (i != max_index1 && (max_index2 == -1 || factor[i] > factor[max_index2]))
            max_index2 = i;
    }

    prime1.emplace_back(factor[max_index2]);
    while (prime1.back() != 1)
    {
        factors1(prime1.back());
        if (prime1.back() == n)
        {
            break;
        }
    }
}

int i = 1;
while (i * i <= x)
{
    if (x % i == 0)
    {
        factor.emplace_back(i);

        if (x / i != i)
        {
            factor.emplace_back(x / i);
        }
    }
    i++;
}
int size = factor.size();
int max_index1 = -1, max_index2 = -1;
for (i = 0; i < size; i++)
{
    if (max_index1 == -1 || (factor[i] > factor[max_index1]))
        max_index1 = i;
}

for (i = 0; i < size; i++)
{
    if (i != max_index1 && (max_index2 == -1 || factor[i] > factor[max_index2]))
        max_index2 = i;
}
prime2.emplace_back(factor[max_index2]);
while (prime2.back() != 1)
{
    factors2(prime2.back());
}
}

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n;
    if (n == m)
    {
        cout << "0";
        // << "\n";
        return 0;
    }
    if (n % m == 0 || m % n == 0)
    {
        if (m > n)
        {
            factors1(m);
            auto it = std::find(prime1.begin(), prime1.end(), n);
            if (it != prime1.end())
            {
                prime1.erase(it, prime1.end());
                cout << prime1.size() + 1;
                //cout << "\n";
                return 0;
            }
        }
        else
        {

            factors2(n);
            auto it = std::find(prime2.begin(), prime2.end(), m);
            if (it != prime2.end())
            {
                prime2.erase(it, prime2.end());
                cout << prime2.size() + 1;
                //cout << "\n";
                return 0;
            }
        }
    }
    else
    {
        factors1(m);
        factors2(n);
        /* for (auto i = prime1.begin(); i < prime1.end(); i++)
            cout << *i << " ";
        cout << "\n";
        for (auto i = prime2.begin(); i < prime2.end(); i++)
            cout
                << *i << " ";
        cout << "\n";*/
        /*set<int> prime3;
    std::vector<int> v(x);
    std::copy(y.begin(), y.end(), std::back_inserter(v));

    std::sort(prime3.begin(), prime3.end());
    prime3.erase(std::unique(prime3.begin(), prime3.end()), prime3.end());*/

        set<int> prime3;
        for (auto i = prime2.begin(); i < prime2.end(); i++)
            prime3.insert(*i);

        for (auto i = prime1.begin(); i < prime1.end(); i++)
            prime3.insert(*i);

        cout << prime3.size() + 1;
    }
    return 0;
}