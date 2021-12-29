// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
public:
    void merge(int Arr[], int start, int mid, int end)
    {
        // Your code here
        int temp[end - start + 1];
        int i = start, j = mid + 1, k = 0;
        while (i <= mid && j <= end)
        {
            if (Arr[i] <= Arr[j])
            {
                temp[k] = Arr[i];
                k += 1;
                i += 1;
            }
            else
            {
                temp[k] = Arr[j];
                k += 1;
                j += 1;
            }
        }
        while (i <= mid)
        {
            temp[k] = Arr[i];
            k += 1;
            i += 1;
        }

        while (j <= end)
        {
            temp[k] = Arr[j];
            k += 1;
            j += 1;
        }
        for (i = start; i <= end; i += 1)
        {
            Arr[i] = temp[i - start];
        }
    }

public:
    void mergeSort(int arr[], int x, int y)
    {
        //code here
        int mid;
        if (x < y)
        {
            mid = (x + y) / 2;
            mergeSort(arr, x, mid);
            mergeSort(arr, mid + 1, y);
            merge(arr, x, mid, y);
        }
    }
};

// { Driver Code Starts.

int main()
{
    int n, T, i;

    scanf("%d", &T);

    while (T--)
    {

        scanf("%d", &n);
        int arr[n + 1];
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        Solution ob;
        ob.mergeSort(arr, 0, n - 1);
        printArray(arr, n);
    }
    return 0;
} // } Driver Code Ends