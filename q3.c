#include <stdio.h>

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
            continue;
        }
        // printf("%d ", arr[i]);
    }
    // while (arr[i] == 0)
    // {
    //     sum = sum + arr[i];
    // }
    printf("%d", count);
    return 0;
}