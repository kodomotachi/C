#include <stdio.h>
#include <stdbool.h>
#include <time.h>

bool test(int *arr, int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			return false;
		}
	}
	return true;
}

void nhap(int *n, int *arr)
{
	while ((*n) <= 0)
	{
		printf("Nhap n > 0: ");
		scanf("%d", n);
	}
	int i = 0;
	srand (time(0));
	while (i < (*n))
	{
		int x = 1 + rand()%(100 - 1 + 1);
		if(test(arr, i, x))
		{
			arr[i++] = x;
		}
	}
}

void hienThi(int n, int *arr)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int n = 0, arr[100];
	nhap(&n, arr);
	hienThi(n, arr);
	return 0;	
} 
