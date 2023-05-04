#include <stdio.h>

int count_before_zero(int arr, int sz)
{
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], count = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] != 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("%d", count);
    return 0;
}