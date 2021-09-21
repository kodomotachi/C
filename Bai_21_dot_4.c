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

void *chuyenVi(int n, int m, int a[100][100])
{
	printf("\n");
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0, m = 0, a[100][100];
	nhap(&n, &m, a);
	chuyenVi(n, m, a);
	return 0;	
}
