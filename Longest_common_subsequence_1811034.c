#include <stdio.h>
#include <string.h>

int max(int x, int y)
{
    if (x > y)
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
    char str1[50];
    char str2[50];

    printf("Enter String 1\n");
    gets(str1);
    printf("\nEnter String 2\n");
    gets(str2);
    int n = strlen(str1);
    int m = strlen(str2);
    int lcs[n + 1][m + 1];

    for (int i = 0; i <= n; i++)
        lcs[i][0] = 0;

    for (int j = 0; j <= m; j++)
        lcs[0][j] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                lcs[i][j] = 1 + lcs[i - 1][j - 1];
            }
            else
            {
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
            }
        }
    }
    printf("\nLength of Longest common subsequence = %d", lcs[n][m]);

    int x = lcs[n][m];
    char str3[x + 1];
    str3[x] = '\0';
    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (str1[i - 1] == str2[j - 1])
        {
            str3[x - 1] = str1[i - 1];
            i--;
            j--;
            x--;
        }
        else if (lcs[i - 1][j] > lcs[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    printf("\nLCS String = ");
    puts(str3);
}