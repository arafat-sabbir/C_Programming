#include <stdio.h>
#include <string.h>
int main()
{
    char str[100001];
    scanf("%s", &str);
    int consonantCount = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            consonantCount++;
        }
    }
    printf("%d", consonantCount);
    return 0;
}