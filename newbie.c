#include <stdio.h>

int main()
{
     int n, a[100][100], b[100][100], s[100][100], i, j;
     scanf("%d", &n);
     for (i = 0; i < n; i++)
     {
          for (j = 0; j < n; j++)
          {
               scanf("%d", &a[i][j]);
          }
          printf("\n");
     }
     for (i = 0; i < n; i++)
     {
          for (j = 0; j < n; j++)
          {
               scanf("%d", &b[i][j]);
          }
          printf("\n");
     }
     for (i = 0; i < n; i++)
     {
          for (j = 0; j < n; j++)
          {
               s[i][j] = a[i][j] + b[i][j];
               printf("%d ", s[i][j]);
          }
          printf("\n");
     }
     return 0;
}
