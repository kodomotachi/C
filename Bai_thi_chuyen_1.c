#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool test(int n, int a[100])
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int a[100], b[100], i, m, n, j;
	printf("Nhap so luong o dat: ");
	scanf("%d", &n);
	printf("Nhap so luong voi nuoc: ");
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0; i < n; i++)
	{
		a[i] = 0;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i == b[j])
			{
				a[i] = 1;
			}
		}
	}
	int count = 1, k = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] == 1)
		{
			a[abs(k - i)] = 1;
			a[abs(k + i)] = 1;
			count++;
			k++;
		}
		if (test(n, a) == true)
		{
			break;
		}
	}
	printf("\n%d", count);
	return 0;
}
