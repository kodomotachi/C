#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

bool isWhiteSpace(char c)
{
     return c == ' ' || c ==  '\t' || c == '\n';
}

bool specialCharacter(char c)
{
     return c == ',' || c == '.' || c == '(' || c == ')' || c == '?' || c == ':' || c == ';' || c == '!';
}

void removeAtTail(char *);

void removeAtTail(char *s)
{
     int len = strlen(s);
     int i = len - 1;
     while (isWhiteSpace(s[i]))
     {
          s[i] = '\0';
          i--;
     }
}

void removeAtHead(char *);

void removeAtHead(char *s)
{
     int len = strlen(s), i, count = 0;
     for (i = 0; i < len; i++)
     {
          if (isWhiteSpace(s[i]))
          {
               count++;
          }
          else
          {
               break;
          }
     }
     for (i = 0; i <= len - count; i++)
     {
          s[i] = s[i + count]; 
     }
}

void removeAtMid(char *);

void removeAtMid(char *s)
{
     int i, j;
     int len = strlen(s);
     for (i = 0; i < len; i++)
     {
          if (isWhiteSpace(s[i]) && isWhiteSpace(s[i + 1]))
          {
               for (j = i + 1; j < len; j++)
               {
                    s[j] = s[j + 1];
               }
               i--;
          }
          else if (isWhiteSpace(s[i]) && specialCharacter(s[i + 1]))
          {
               for (j = i + 1; j < len; j++)
               {
                   s[j] = s[j + 1];
               }
               i--; 
               len--;
          }
     }
}

int main()
{
     int i;
     char s[100], s1[100];
     fgets(s, 99, stdin);
     removeAtTail(s);
     removeAtHead(s);
     removeAtMid(s);
     for (i = 1; i < strlen(s); i++)
     {
          
     }
     printf("%s", s);
     return 0;
}