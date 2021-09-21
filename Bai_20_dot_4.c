#include <stdio.h>

void *nhap(int *n, int *m, int a[100][100])
{
	int i, j;
	while ((*n) <= 0)
	{
		printf("Nhap n > 0: ");
		scanf("%d", n);
	}
	while ((*m) <= 0)
	{
		printf("Nhap m > 0: ");
		scanf("%d", m);
	}
	for (i = 0; i < (*n); i++)
	{
		for (j = 0; j < (*m); j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);	
		}
	}
}

void *max(int n, int m, int a[100][100])
{
	int count, i, j, max;
	for (i = 0; i < n; i++)
	{
		max = a[i][0];
		for (j = 1; j < m; j++)
		{
			if (max < a[i][j])
			{
				max = a[i][j];
			}
		}
		count = i + 1;
		printf("Line %d: %d\n", count, max);	
	} 
}

int main()
{
	int n = 0, m = 0, a[100][100];
	nhap(&n, &m, a);
	max(n, m, a);
	return 0;
} 
