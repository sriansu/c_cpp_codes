#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
#define pi 3.1415926535
#define endl "\n"
#pragma GCC optimize("Ofast")
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define foi(a, b) for (int i = a; i < b; i++)
#define foll(a, b) for (ll i = a; i < b; i++
#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b
using namespace std;

const ll MAX_SIZE = 1000001;
vector<ll> isprime(MAX_SIZE, true);
vector<ll> prime;         //all prime less than n
vector<ll> SPF(MAX_SIZE); //smallest prime factor

void manipulated_seive(int N)
{ //O(n) manipulated seive of eratosthenes
    isprime[0] = isprime[1] = false;

    for (ll int i = 2; i < N; i++)
    {
        if (isprime[i])
        {
            prime.push_back(i);
            SPF[i] = i;
        }

        for (ll int j = 0;
             j < (int)prime.size() &&
             i * prime[j] < N && prime[j] <= SPF[i];
             j++)
        {
            isprime[i * prime[j]] = false;

            SPF[i * prime[j]] = prime[j];
        }
    }
}

void seive_of_eratosthenes(ll n) //Time complexity --- n*log(log(n))
{

    bool prime_tf[n + 1];
    memset(prime_tf, true, sizeof(prime_tf));

    for (ll p = 2; p * p <= n; p++)
    {
        if (prime_tf[p] == true)
        {
            for (ll i = p * p; i <= n; i += p)
                prime_tf[i] = false;
        }
    }
    for (ll p = 2; p <= n; p++)
        if (prime_tf[p])
            cout << p << " ";
}

void prime_naive(ll n)
{
    if (n <= 2)
        cout << "invalid";
    for (ll i = 2; i <= n; i++)
    {
        ll count = 0;

        for (ll j = 1; j <= (i / 2); j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count < 2)
        {
            cout << i << ' ';
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    seive_of_eratosthenes(n);
    cout << endl;
    manipulated_seive(n);
    for (int i = 0; i < prime.size() && prime[i] <= n; i++)
        cout << prime[i] << " ";

    return 0;
}