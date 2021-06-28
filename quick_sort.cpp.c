#include <stdio.h>
#include <stdlib.h>

void quicksort(int[], int, int);
int partition(int[], int, int);

int main()
{
	int a, x, j;
	printf("Enter the size of array\n");
	scanf("%d", &a);
	int arr[a];
	printf("Enter the elements\n");

	for (x = 0; x < a; x++)
	{
		scanf("%d", &arr[x]);
	}
	quicksort(arr, 0, a - 1);

	printf("\nSorted array in increasing order is:\n");
	for (j = 0; j < a; j++)
	{
		printf("%d  ", arr[j]);
	}
	return 0;
}

void quicksort(int arr[], int x, int y)
{
	int q;
	if (x < y)
	{
		q = partition(arr, x, y);
		quicksort(arr, x, q - 1);
		quicksort(arr, q + 1, y);
	}
}

int partition(int arr[], int x, int y)
{
	int z = arr[y], p, q, j;
	int i = x - 1;
	for (j = x; j <= y - 1; j++)
	{
		if (arr[j] <= z)
		{
			i = i + 1;
			p = arr[i];
			arr[i] = arr[j];
			arr[j] = p;
		}
	}
	q = arr[i + 1];
	arr[i + 1] = arr[y];
	arr[y] = q;
	return (i + 1);
}
