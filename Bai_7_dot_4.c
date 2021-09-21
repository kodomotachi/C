#include <stdio.h>

void nhap(int*arr, int *n)
{
	while ((*n) <= 0)
	{
		printf("Nhap n > 0: ");
		scanf("%d", n);
	}
	int i;
	for (i = 0; i < (*n); i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void nhapSoNguyen(int *a, int *b)
{
	printf("Nhap a: ");
	scanf("%d", a);
	printf("Nhap b: ");
	scanf("%d", b);
}

void sum(int *arr, int n, int a, int b)
{
	int i;
	int s = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] >= a && arr[i] <= b)
		{
			s += arr[i];
		}
	}
	printf("Tong [%d, %d] trong mang: %d", a, b, s);
}

int main()
{
	int n = 0, arr[100];
	int a, b;
	nhap(arr, &n);
	nhapSoNguyen(&a, &b);
	sum(arr, n, a, b);
	return 0;
}
