#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
     char s[200];
     printf("Nhap xau: ");
     gets(s);
     int i, count = 1;
     for(i = 0; i < strlen(s); i++)
     {
          if (isspace(s[i]))
          {
               count++;
          }
          else
          {
               continue;
          }
     }
     printf("So tu: %d", count);
     return 0;
}