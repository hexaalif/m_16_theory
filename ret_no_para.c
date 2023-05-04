#include <stdio.h>

int Multiply()
{
    int s, t;
    scanf("%d %d", &s, &t);
    int malti = s * t;
    return malti;
}

int main()
{
    int M = Multiply();
    printf("%d", M);
    return 0;
}