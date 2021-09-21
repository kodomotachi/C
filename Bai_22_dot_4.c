#include <stdio.h>

void *nhapSo(int *n, int *m)
{
	int i;
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
}

void *nhapMangA(int n, int m ,int a[100][100])
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void *nhapMangB(int n, int m, int b[100][100])
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("b[%d][%d] = ", i, j);
			scanf("%d", &b[i][j]);
		}
	}
}

void *hienThi(int n, int m, int a[100][100], int b[100][100])
{
	int i, j, s[100][100];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			s[i][j] = a[i][j] + b[i][j];
			printf("%5d ", s[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0, m = 0, a[100][100], b[100][100];
	nhapSo(&n, &m);
	nhapMangA(n, m, a);
	nhapMangB(n, m, b);
	hienThi(n, m, a, b);
	return 0;
}
