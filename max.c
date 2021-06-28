#include <stdio.h>

void swap(long *a, long *b)
{
    long t = *a;
    *a = *b;
    *b = t;
}

int partition(long arr[], int low, int high)
{
    long pivot = arr[high];
    int i = (low - 1);

    int j = 0;

    for (j = low; j <= high - 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(long arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int p, i;
    scanf("%d", &p);
    long arr[p];
    for (i = 0; i < p; i++)
        scanf("%ld", &arr[i]);
    
    quickSort(arr, 0, p-1);

    long d = arr[p - 1] * arr[p - 2];
    
    
        printf("\n%ld", d);
    
    return 0;
}
