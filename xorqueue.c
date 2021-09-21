#include <stdio.h>

int main()
{
     long a[200000], b[200000], n, count = 0, i, m, number1, number2, j;
     char mission;
     scanf("%ld", &n);
     for (i = 0; i < n; i++)
     {
          scanf("%ld", &a[i]);
     }
     for (i = 0; i < n; i++)
     {
          if (i = 0)
          {
               b[i] = a[i];
          }
          else
          {
               for (j = 0; j < i; j++)
               {
                    if (j = 0)
                    {
                         b[i] = a[0]^a[1];
                    } 
                    else
                    {
                         b[i] = b[i]^a[j];
                    }
               }
          }
          
     }
     for (i = 0; i < n; i++)
     {
          printf("%ld", b[i]);
     }
     return 0;
}