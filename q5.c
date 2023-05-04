#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);
    int n = strlen(s);
    int i = 0, common = 0;
    for (i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
        {
            common++;
        }
    }
    printf("%d\n", i);
    printf("%d\n", common);
    if (common == i)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    // printf("%s", s);
    return 0;
}