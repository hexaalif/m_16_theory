#include <stdio.h>

int divider(int x, int y)
{
    int div = x / y;
    return div;
}

int main()
{
    int d = divider(40, 20);
    printf("%d", d);
    return 0;
}