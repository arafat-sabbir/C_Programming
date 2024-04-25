#include <stdio.h>
#include <string.h>
int main()
{
    char string1[100];
    char string2[100];
    scanf("%s %s", string1, string2);
    for (int i = 0; i <= strlen(string1); i++)
    {
        string2[i] = string1[i];
    }
    printf("Value Of String 2 Is:- %s", string2);
    return 0;
}