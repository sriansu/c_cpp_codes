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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    vector<int> adj[10001];
    int m;
    cin >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int visited[10001];
    memset(visited, 0, sizeof(visited));
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            int sum = 0;
            queue<int> q;
            q.push(i);
            while (!q.empty())
            {
                int v = q.front();
                visited[v] = 1;
                for (int j = 0; j < adj[v].size(); j++)
                {
                    if (visited[adj[v][j]] == 0)
                        q.push(adj[v][j]);
                }
                sum += arr[v];
                q.pop();
            }
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;

    return 0;
}