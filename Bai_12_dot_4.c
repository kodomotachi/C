#include <stdio.h>

void nhap(int *n, int *arr)
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

int nhapK(int n)
{
	int k = -1;
	while (k < 0 || k > n)
	{
		printf("Nhap vi tri k can chen: ");
		scanf("%d", &k);
	}
	return k;
}

void chen(int k, int x, int n, int *arr)
{
	int i;
	for (i = n; i >= k; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[k - 1] = x;
}

void hienThi(int n, int *arr)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d  ", arr[i]);
	}
}

int main()
{
	int n = 0, arr[100];
	nhap(&n, arr);
	int k = nhapK(n);
	int x;
	printf("Nhap gia tri x: ");
	scanf("%d", &x);
	printf("Truoc khi chen: ");
	hienThi(n, arr);
	n++; 
	printf("\nSau khi chen: ");
	chen(k, x, n, arr);
	hienThi(n, arr);
	return 0;
}
