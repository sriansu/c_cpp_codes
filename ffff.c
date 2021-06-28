int main()
{
    int a[6][6], i, j, k, m, sum, maxsum;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    maxsum = a[0][0] + a[0][1] + a[0][2] + a[1][1] + a[2][0] + a[2][1] + a[2][2];

    for (i = 0; i < 4; i++)
    {

        for (j = 0; j < 4; j++)
        {

            sum = 0;

            for (k = j; k < j + 3; k++)
            {
                sum += a[i][k];

                if (k == j + 1)
                {
                    sum += a[i + 1][k];
                }

                m = i + 2;      // third row of hourglass
                sum += a[m][k]; //sum of third row
            }

            if (sum > maxsum)
            { // if new sum is greater than maxsum

                maxsum = sum; // sum becomes the new maxsum
            }
        }
    }
    printf("%d", maxsum);
}
