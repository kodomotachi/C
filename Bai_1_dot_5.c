#include <stdio.h>
#include <stdlib.h>

int main()
{
     char *s, *p;
     printf("Nhap so nhi phan: ");
     scanf("%s", s);
     long l;
     l = strtol(s, &p, 2);
     printf("Ket qua: %ld", l);
     return 0;
}