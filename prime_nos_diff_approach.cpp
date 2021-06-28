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
bool prime_recur(ll n)
{
    static int i = 2;

    if (n == 0 || n == 1) //recursive approach
    {
        return false;
    }

    // Checking Prime
    if (n == i)
        return true;

    // base cases
    if (n % i == 0)
    {
        return false;
    }
    i++;
    return prime_recur(n);
}
void prime_sqrt(ll n) //square root - based on the fact that for any no factors come at about root(n) position.
                      //if its greater than that it will ulimately exceed the no itself
{
    ll i;
    for (i = 2; i < ceil(sqrt(n)); ++i)
        if (n % i == 0)
            break;
    cout << (i == ceil(sqrt(n)) ? "Prime Number" : "Not a Prime") << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    prime_sqrt(n);
    prime_recur(n) ? cout << "Prime Number\n" : cout << "Not a Prime\n";
}