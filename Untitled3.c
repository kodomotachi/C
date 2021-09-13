#include <stdio.h>

int main()
{
	int a[100][100], i, n, s, j;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	s = n/2 + 0.5;
	a[0][s] = 1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
