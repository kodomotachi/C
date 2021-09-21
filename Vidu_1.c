#include <stdio.h>
#include <stdbool.h>

void nhapN(int *n)
{
	while (*n <= 0)
	{
		printf("Nhap so luong phan tu tap hop me: ");
		scanf("%d", n);
	}	
}

void nhapMangMe(int *a, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void nhapM(int n, int *m)
{
	while (*m <= 0 || *m > n)
	{
		printf("Nhap so luong phan tu tap hop con: ");
		scanf("%d", m);
	}
}

void nhapMangCon(int *b, int m)
{
	int i;
	printf("\n");
	for (i = 0; i < m; i++)
	{
		printf("b[%d] = ", i);
		scanf("%d", &b[i]);
	}
}

bool test(int *a, int *b, int n, int m)
{
	int i, j, d;
	for (i = 0; i < m; i++)
	{
		d = 0;
		for (j = 0; j < n; j++)
		{
			if (b[i] == a[j])
				{
					d = 1;
					break;
				}
		}
		if (d == 0)
		{
			return false;
			break;
		}
	}
	return true;
}

int main()
{
	int m = 0, n = 0, a[100], b[100], binary;
	nhapN(&n);
	nhapM(n, &m);
	nhapMangMe(a, n);
	nhapMangCon(b, m);
	binary = test(a, b, n, m);
	if (binary == true)
	{
		printf("\nTap b la tap con cua day a");
	}
	else
	{
		printf("\nTap b khong phai la tap con cua tap a");
	}
	return 0;
}
