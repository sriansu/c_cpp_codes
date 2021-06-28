#include <stdio.h>

int main()
{
    struct sack
    {
        float weight, profit, ratio;
    };
    float capacity, amount = 0;

    int i, j, n;
    printf("Enter the capacity of Knapsack\n");
    scanf("%f", &capacity);
    printf("\nEnter the no. of items\n");
    scanf("%d", &n);
    struct sack s[n];
    struct sack s2;
    printf("\nEnter the profit and weight of %d items\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f %f", &s[i].profit, &s[i].weight);
    }

    for (i = 0; i < n; i++)
    {
        s[i].ratio = s[i].profit / s[i].weight;
    }

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
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
    printf("\nMaximum amount using greedy approach: %f", amount);
    return 0;
}
