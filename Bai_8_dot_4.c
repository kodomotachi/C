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

void test(int *arr, int n)
{
	int i;
	int d = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] != arr[n - i - 1])
		{
			d = 1;
		}
	}
	if (d == 0)
	{
		printf("\nMang nay doi xung nhau");
	}
	else
	{
		printf("\nMang nay khong doi xung nhau");
	}
}

int main()
{
	int n = 0, arr[100];
	nhap(arr, &n);
	test(arr, n);
	return 0;	
}
