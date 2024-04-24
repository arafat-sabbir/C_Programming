#include <stdio.h>
#include <string.h>
int main()
{
    char x[100001];
    fgets(x, 100001, stdin);
    for (int i = 0; x[i] != '\\'; i++)
    {
        printf("%c", x[i]);
    }
    return 0;
}