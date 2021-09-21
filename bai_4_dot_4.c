#include <stdio.h>

void nhap(int *arr, int *n)
{
	while((*n) <= 0)
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

void nhapK(int *k)
{
	printf("Ban hay nhap k de kiem tra phan tu: ");
	scanf("%d", k);
}

void count(int *arr, int n, int k)
{
	int i, count = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == k)
		{
			count++;
		}
	}
	if (count == 0)
	{
		printf("\nKhong co so %d trong mang.", k);
	}
	else
	{
		printf("Co %d so %d trong mang.", count, k);
	}
}

int main()
{
	int n = 0, arr[100];
	nhap(arr, &n);
	int k;
	nhapK(&k);
	count(arr, n, k);
	return 0;
}
