#include <stdio.h>

int main()
{
     int m, n, i, max, count = -1, p = -1;
     int a[100], b[100], c[100];
     scanf("%d%d", &m, &n);
     for (i = 0; i < m; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < n; i++)
     {
          scanf("%d", &b[i]);
     }
     if (n > m)
          max = n;
     else
          max = m;
     while (count <= max)
     {
          count++;
          for (i = 0; i < max; i++)
          {
               if (a[count] == b[i])
               {
                    p++;
                    c[p] = a[count];
                    break;
               }
          }
     }
     printf("\n%d", p + 1);
     for (i = 0; i <= p; i++)
     {
          printf("\n%d", c[i]);
     }
     return 0;
}