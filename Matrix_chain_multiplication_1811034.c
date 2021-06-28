#include <stdio.h>
#include <stdlib.h>
#define MAX 10000000
int main()
{
    int a;
    printf("Enter no. of Matrices to be multiplied\n");
    scanf("%d", &a);
    int arr[a + 1];
    printf("\nEnter the matrix size details. Skip the consecutive columns and rows of Matrices\n");
    for (int i = 0; i <= a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k = a + 1;
    int M[k][k];
    for (int i = 0; i < k; i++)
        for (int j = 0; j < k; j++)
        {
            M[i][j] = 0;
        }

    int i, j, l, temp;
    for (l = 2; l < k; l++)
        for (i = 1; i < k - l + 1; i++)
        {
            j = i + l - 1;
            M[i][j] = MAX;
            for (int p = i; p < j; p++)
            {
                temp = M[i][p] + M[p + 1][j] + arr[i - 1] * arr[p] * arr[j];
                if (temp < M[i][j])
                {
                    M[i][j] = temp;
                }
            }
        }
    printf("Minimum no. of multiplications is %d", M[1][k - 1]);
}