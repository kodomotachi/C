#include <stdio.h>

int main()
{
     int a, b, c, d, e;
     printf("Moi ban nhap so thu nhat: ");
     scanf("%d", &a);
     printf("Moi ban nhap so thu hai: ");
     scanf("%d", &b);
     printf("Moi ban nhap so coi cung: ");
     scanf("%d", &c);
     printf("Moi ban nhap so thu tu: ");
     scanf("%d", &d);
     c = b^a;
     e = c^d;
     printf("%d", e);
     return 0;
}