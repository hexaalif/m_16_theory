#include <stdio.h>
#include <string.h>
char s[100];
void is_palindrome()
{
    int n = strlen(s);
    int i = 0, common = 0;
    for (i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
        {
            common++;
        }
    }
    // printf("%d\n", i);
    // printf("%d\n", common);
    if (common == i)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}

int main()
{

    scanf("%s", s);
    is_palindrome(s);
    // printf("%s", s);
    // printf("hisijs");
    return 0;
}