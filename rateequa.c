#include <stdio.h>
#include <math.h>

int main()
{
     long a1, n, f1, f2, fn, i, s = 0, a = 1;
     scanf("%ld%ld", &a1, &n);
     f1 = a1;
     f2 = a1;
     s += f1 + f2;
     for (i = 1; i <= n - 2; i++)
     {
          fn = f2 + f1;
          f1 = f2;
          f2 = fn;
          s += fn;
     }
     for (i = 1; i <= 9; i++)
     {
          a *= 10;
     }
     a += 7;
     s = s%a;
     printf("%ld", s);
     return 0;
}