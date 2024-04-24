#include <stdio.h>
#include <string.h>
int main()
{
    char string1[100];
    scanf("%s", string1);
    char string2[100];
    for (int i = 0; i <= strlen(string1); i++)
    {
        string2[i] = string1[i];
    }
    printf("Value Of String 2 Is:- %s", string2);
    return 0;
}