#include <stdio.h>
#include <math.h>

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

void nhapK(int *k)
{
	printf("Nhap k de kiem tra: ");
	scanf("%d", k);
} 

void test(int *arr, int n, int k)
{
	int i;
	int m = k;
	int min = abs(m - arr[0]);
	int s;
	for (i = 1; i < n; i++)
	{
		if (k == arr[i])
		{
			printf("\nGia tri gan %d: %d", k, arr[i]);
			break; 
		}
		else
		{
			if (abs(m - arr[i]) < min)
			{
				min = abs(m - arr[i]);
				s = arr[i];
			}
		}
		if (i == n - 1)
		{
			printf("\nGia tri gan %d: %d", k, s);
		} 
	}
}

int main() 
{
	int n = 0, arr[100];
	nhap(arr, &n);
	int k;
	nhapK(&k);
	test(arr, n, k);
	return 0;
}
