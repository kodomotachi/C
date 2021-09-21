#include <stdio.h>
#include <stdbool.h>

bool nam_nhuan(int a)
{
     if (a%19 == 3 || a%19 == 6 || a%19 == 9 || a%19 == 11 || a%19 == 14 || a%19 == 17 || a%19 == 0)
     {
          return true;
     } 
     return false;
}

int main()
{
     int a, b, i, count = 0;
     scanf("%d%d", &a, &b);
     for (i = a; i <= b; i++)
     {
          if (nam_nhuan(i) == true)
          {
               count++;
          }
     }
     printf("%d", count);
     return 0;
}