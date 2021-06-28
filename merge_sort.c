#include <stdio.h>
void mergesort(int[], int, int, int);
void partition(int[], int, int);
int main()
{
	int i, j, a;
	printf("Enter the size of array\n");
	scanf("%d", &a);
	int arr[a];
	printf("Enter the elements\n");
	for (i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}
	partition(arr, 0, a - 1);
	printf("\nSorted array is:\n");
	for (j = 0; j < a; j++)
	{
		printf("%d  ", arr[j]);
	}
	return 0;
}
void partition(int arr[], int x, int y)
{
	int mid;
	if (x < y)
	{
		mid = (x + y) / 2;
		partition(arr, x, mid);
		partition(arr, mid + 1, y);
		mergesort(arr, x, mid, y);
	}
}

void mergesort(int arr[], int x, int mid, int y)
{
	int i, mi, k, lo, temp[50];
	lo = x;
	i = x;
	mi = mid + 1;
	while ((lo <= mid) && (mi <= y))
	{
		if (arr[lo] <= arr[mi])
		{
			temp[i] = arr[lo];
			lo++;
		}
		else
		{
			temp[i] = arr[mi];
			mi++;
		}
		i++;
	}
	if (lo > mid)
	{
		for (k = mi; k <= y; k++)
		{
			temp[i] = arr[k];
			i++;
		}
	}
	else
	{
		for (k = lo; k <= mid; k++)
		{
			temp[i] = arr[k];
			i++;
		}
	}
	for (k = x; k <= y; k++)
	{
		arr[k] = temp[k];
	}
}
