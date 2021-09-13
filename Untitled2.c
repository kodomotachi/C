#include <stdio.h>

int main()
{
	int n, a[100][100], i, j, count = 1, s, d;
	printf("Nhap so cap ma phuong: ");
	scanf("%d", &n);
	s = n/2 + 0.5;
	d = n*n;
	i = 0;
	j = s;
	a[0][s] = 1;
	n--;
	while (count != d)
	{
		count++;
		if (i == 0 && j == n)
		{
			a[i][j] = count;
			i++;
		}
		else if (i == 0 || j == n)
		{
			if (i == 0)
			{
				if (a[i][j] != 0)
				{
					i = n;
					j++;
					a[i][j] = count;
				}
				else
				{
					a[i][j] = count;
					i = n;
					j++;
				}
			}
			else if (j == n)
			{
				a[i][j] = count;
				j = 0;
				i--;
			}
		}
		else if (a[i + 1][j + 1] != 0)
		{
			i++;
			a[i][j] = count;
		}
		else
		{
			a[i][j] = count;
			i--;
			j++;
		}
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
