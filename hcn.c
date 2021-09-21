#include <stdio.h>

int main()
{
     int n, i, j, x1[1000], x2[1000], y1[1000], y2[1000];
     scanf("%d", &n);
     for (i = 0; i < n; i++)
     {
          scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
     }
     int count = 0, count2 = 0;
     for (j = 0; j < n; j++)
     {
          for (i = 0; i < n; i++)
          {
               if (i == j)
               {
                    continue;
               }
               else
               {
                    if (x1[j] <= x1[i] && x1[i] <= x2[j])
                    {
                         if (x1[j] <= x2[i] && x2[i] <= x2[j])
                         {
                              if (y1[j] >= y1[i] && y1[i] >= y2[j])
                              {
                                   if (y1[j] >= y2[i] && y2[i] >= y2[j])
                                   {
                                        count++;
                                   }
                              }
                         }
                    }
               }
          }
          if (count >= 2)
          {
               printf("%d", count);
               break;
          }
          else
          {
               count = 0;
          }
     }
     return 0;
}