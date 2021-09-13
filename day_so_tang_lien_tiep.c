#include <stdio.h>

int main()
{
    int n, max, locate, i, arr[100], count[100], location[100], cnt, j;
    printf("Moi ban nhap so: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 100; i++)
    {
        count[i] = 0;
        location[i] = 0;
    }
    j = 0;
    for (i = 0; i < n - 1; i++)
    {
        cnt = 0;
        if (arr[i - 1] < arr[i])
        {
            if (cnt == 0)
            {
                location[j] = i;
                count[j]++;
                cnt++;
            }
            else
            {
                count[j]++;
                cnt++;
            }
        }
        else
        {
            j++;
            cnt = 0;
        }
    }
    max = count[0];
    locate = 0;
    for (i = 1; i < n; i++)
    {
        if (max < count[i])
        {
            max = count[i];
            locate = i;
        }
    }
    for (i = locate; i < locate + max; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}