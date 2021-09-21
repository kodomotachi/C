#include <stdio.h>

void *nhap(int *n, int *a)
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
		scanf("%d", &a[i]);
	}
}

void *nhapK(int *k)
{
	printf("Nhap k: ");
	scanf("%d", k);
}

void test(int n, int k, int *a)
{
	int i, j, b[100], tmp;
	for (i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	a[n] = k;  
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (b[i] > b[j])
			{
				tmp = b[i];
				b[i] = b[j];
				b[j] = tmp;
			}
		}
	}
	printf("\nSau khi sort: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", b[i]);
	}
	for (i = 0; i <= n - 1; i++)
	{
		for (j = i + 1; j <= n; j++)
		{
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf("\nSau khi sort (co them k): ");
	for (i = 0; i <= n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	int n = 0, a[100], k;
	nhap(&n, a);
	nhapK(&k);
	test(n, k, a);
	return 0;
}
