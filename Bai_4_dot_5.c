#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
     char s[100];
     int i;
     printf("Nhap xau: ");
     gets(s);
     printf("Xau ket qua: ");
     for (i = 0; i < strlen(s); i++)
     {
          if (isupper(s[i]) == 1)
          {
               printf("%c", s[i]);
               continue;
          }
          else
          {
               putchar(toupper(s[i]));
          }
     }
     return 0;
}