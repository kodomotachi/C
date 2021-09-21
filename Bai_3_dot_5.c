#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isRevert(char *c)
{
     char x[100];
     strcpy(x, c);
     strrev(c);
     return strcmp(x, c) == 0;
}

int main()
{
     long number;
     printf("Nhap so: ");
     scanf("%ld", &number);
     char x[100];
     ltoa(number, x, 10);
     printf("%d", isRevert(x));
     return 0;
}