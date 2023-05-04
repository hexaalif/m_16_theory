#include <stdio.h>

int count_before_zero(int arr[], int sz)
{
    int count = 0;
    for (int i = 0; i < sz; i++)
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
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("%d", count_before_zero(arr, n));
    return 0;
}