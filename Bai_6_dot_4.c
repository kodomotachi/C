#include <stdio.h>

void nhap(int *arr, int *n)
{
	while ((*n) <= 0)
	{
		printf("Nhap n > 0: ");
		scanf("%d", n);
	}
	int i;
	for (i = 0; i < (*n); i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void avgChan(int *arr, int n)
{
	int i, s = 0, count = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i]%2 == 0)
		{
			s += arr[i];
			count++;
		}
	}
	float avg = s/count;
	printf("\nTrung binh cong so chan cua day: %0.0f", avg);
}

void avgLe(int *arr, int n)
{
	int i, s = 0, count = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i]%2 == 1)
		{
			s += arr[i];
			count++;
		}
	}
	float avg = s/count;
	printf("\nTrung binh cong so le cua day: %0.0f", avg);
}

int main()
{
	int n = 0, arr[100];
	nhap(arr, &n);
	avgChan(arr, n);
	avgLe(arr, n);
	return 0;
} 
