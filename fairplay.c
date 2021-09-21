#include <stdio.h>

int main()
{
     int n, a[100000], b[100000], i, j, tmp, count = 0;
     scanf("%d", &n);
     for (i = 0; i < n; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < n; i++)
     {
          scanf("%d", &b[i]);
     }
     for (i = 0; i < n - 1; i++)
     {
          for (j = i + 1; j < n; j++)
          {
               if (a[i] > a[j])
               {
                    tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
               }
          }
     }
     for (i = 0; i < n - 1; i++)
     {
          for (j =  i + 1; j < n; j++)
          {
               if (b[i] > b[j])
               {
                    tmp = b[i];
                    b[i] = b[j];
                    b[j] = tmp;
               }
          }
     }
     for (i = 1; i < n; i++)
     {
          if (b[i] - a[i - 1] > 0)
          {
               count++;
          }
     }
     printf("%d", count);
     return 0;
}