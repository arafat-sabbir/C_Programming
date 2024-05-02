#include <stdio.h>
#include <string.h>

int is_palindrome(char string[])
{
    int after = strlen(string) - 1;
    int before = 0;
    while (before < after)
    {
        if (string[before] != string[after])
        {
            return 0;
        }
        before++;
        after--;
    }
    return 1;
}

int main()
{
    char string[1001];
    scanf("%s", string);
    int res = is_palindrome(string);
    if (res)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}