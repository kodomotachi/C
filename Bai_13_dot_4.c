#include <stdio.h>

void *nhap(int *n, int *a)
{
	while ((*n) <= 0)
	{
		printf("n > 0: ");
		scanf("%d", n);
	}
	int i;
	for (i = 0; i < (*n); i++)
	{
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);	
	}	
}

void *nhapK(int *k)
{
	printf("Nhap k: ");
	scanf("%d", k);
}
void *test(int n, int k, int *a)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (i >= k)
		{
			a[i] = a[i + 1];
		}
	}
	for (i = 0; i < n - 1; i++)
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
