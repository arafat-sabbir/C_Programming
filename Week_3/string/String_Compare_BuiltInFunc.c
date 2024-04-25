#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    scanf("%s %s", a, b);
    int val = strcmp(a, b);
    if (val < 0)
    {
        printf("A Is Smaller");
    }
    else if (val > 0)
    {
        printf("B is Smaller");
    }
    else
    {
        printf("Same Same");
    }
    return 0;
}