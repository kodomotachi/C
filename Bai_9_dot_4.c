#include <stdio.h>

void nhap(int* n, int* arr)
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
		scanf("%d", &arr[i]);
	}
}

void test(int n, int* arr)
{
	int i, j, count;
	for (i = 0; i < n; i++)
	{
		count = 0;
		for (j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				if (j < i)
				{
					break;
				}
				else
				{
					count++;
				}
			}
		}
		if (count == 0)
		{
			continue;
		}
		else
		{
			printf("%d: %d\n", arr[i], count);
		}
	}
}

int main()
{
	int n = 0, arr[100];
	nhap(&n, arr);
	test(n, arr);
	return 0;
}
