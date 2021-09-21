#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
     char s[100];
     int sum = 0;
     printf("Nhap so La Ma (chu y, ban phai bat CAPSLOCK): ");
     gets(s);
     int i;
     for (i = 0; i < strlen(s); i++)
     {
          if (s[i] == 'M')
          {
               sum += 1000;
          }
          else if (s[i] == 'D')
          {
               sum += 500;
          }
          else if (s[i] == 'C')
          {
               sum += 100;
          }
          else if (s[i] == 'L')
          {
               sum += 50;
          }
          else if (s[i] == 'X')
          {
               sum += 10;
          }
          else if (s[i] == 'V')
          {
               sum += 5;
          }
          else if (s[i] == 'I')
          {
               sum += 1;
          }
     }
     printf("Gia tri so La Ma: %d", sum);
     return 0;
}