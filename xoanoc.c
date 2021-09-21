#include <stdio.h>

int d = 0;

void topRight(int [][50], int, int, int, int);
void bottomLeft(int [][50], int, int, int, int);

void topRight(int a[][50], int x1, int y1, int x2, int y2)
{
     for(int i = x1; i <= x2; i++)
          a[y1][i] = d++;
     for (int j = y1 + 1; j <= y2; j++)
          a[j][x2] = d++;
     if (x2 - x1 > 0 && y2 - y1 > 0)
     {
          y1++;
          x2--;
          bottomLeft(a, x1, y1, x2, y2);
     }
}

void bottomLeft(int a[][50], int x1, int y1, int x2, int y2)
{
     for(int i = x2; i >= x1; i--)
          a[y2][i] = d++;
     for (int j = y2 - 1; j >= y1; j--)
          a[j][x1] = d++;
     if (x2 - x1 > 0 && y2 - y1 > 0)
     {
          x1++;
          y2--;
          topRight(a, x1, y1, x2, y2);
     }
}

void result(int a[][50], int m, int n)
{
     for (int i = 0; i < m; i++)
     {
          for (int j = 0; j < n; j++)
          {
               printf("%5d", a[i][j]);
          }
          printf("\n");
     }
}

int main()
{
     int a[50][50];
     int m, n;
     scanf("%d%d", &m, &n);
     topRight(a, 0, 0, n - 1, m - 1);
     result(a, m, n);
     return 0;
}