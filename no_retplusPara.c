#include <stdio.h>

void minus(int x, int b)
{
    int m = x - b;
    printf("%d", m);
}

int main()
{
    int x = 2, b = 1;
    minus(x, b);
    return 0;
}