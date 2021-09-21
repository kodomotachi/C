#include <stdio.h>

void nhapMang1(int *n, int *a)
{
	int i;
	while ((*n) <= 0)
	{
		printf("Nhap n > 0: ");
		scanf("%d", n);	
	} 
	for (i = 0; i < (*n); i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void nhapMang2(int *m, int *b)
{
	int i;
	while ((*m) <= 0)
	{
		printf("Nhap m > 0: ");
		scanf("%d", m);	
	} 
	for (i = 0; i < (*m); i++)
	{
		printf("b[%d] = ", i);
		scanf("%d", &b[i]);
	}
}

void nhapK(int *k)
{
	printf("Nhap k: ");
	scanf("%d", k);
}

void test (int n, int m, int k, int *a, int *b)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		if (i == k)
		{
			for (j = 0; j < m; j++)
			{
				printf("%d ", b[j]);
			}
			printf("%d ", a[i]);
		}
		else
			printf("%d ", a[i]);
	}
}

int main()
{
	int n = 0, m = 0, a[100], b[100], k;
	nhapMang1(&n, a);
	nhapMang2(&m, b);
	nhapK(&k);
	test(n, m, k, a, b);
	return 0;
}
