#include <stdio.h>
#include <math.h>

int main()
{
     double a, b, c, s = 0;
     scanf("%lf%lf", &a, &b);
     c = round(a);
     while (c <= b)
     {
          s += c*c;
          c++;
     }
     printf("%.0lf", s);
     return 0;
}