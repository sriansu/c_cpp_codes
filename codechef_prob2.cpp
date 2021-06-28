#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n, m;
    int count = 0;
    std::cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
          if(i==j&& i%2==0)
            continue;
        for (int j = 1; j <= m; j++)
        {
            if ((i + j) % 5 == 0)
                count++;
            
        }
    }

    cout << count;
    return 0;
}
