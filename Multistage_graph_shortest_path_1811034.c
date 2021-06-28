#include <stdio.h>
#include <limits.h>
#define MAX INT_MAX
#define n 8
int min(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{

    int graph[n][n] = {{MAX, 1, 2, 5, MAX, MAX, MAX, MAX},
                       {MAX, MAX, MAX, MAX, 4, 11, MAX, MAX},
                       {MAX, MAX, MAX, MAX, 9, 5, 16, MAX},
                       {MAX, MAX, MAX, MAX, MAX, MAX, 2, MAX},
                       {MAX, MAX, MAX, MAX, MAX, MAX, MAX, 18},
                       {MAX, MAX, MAX, MAX, MAX, MAX, MAX, 13},
                       {MAX, MAX, MAX, MAX, MAX, MAX, MAX, 2}};

    int dist[n];
    dist[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        dist[i] = MAX;
        for (int j = i; j < n; j++)
        {
            if (graph[i][j] == MAX)
                continue;

            dist[i] = min(dist[i], graph[i][j] + dist[j]);
        }
    }

    printf("Shortest distance from source to sink = %d units.", dist[0]);
}
