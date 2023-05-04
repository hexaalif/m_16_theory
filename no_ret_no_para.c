#include <stdio.h>

void remain()
{
    int x = 8, y = 5;
    int r = x % y;
    printf("%d", r);
}

int main()
{
    remain();
    return 0;
}