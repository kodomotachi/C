#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
     char name[20];
     printf("Moi ban nhap ten: ");
     gets(name);
     printf("Chao mung ban: %s", name);
     printf("\nNhap so tuoi cua ban: ");
     gets(name);
     printf("Ban: %s tuoi", name);
     return 0;
}