#include <stdio.h>
#include <string.h>
int main()
{
    char x[100];
    fgets(x, 20, stdin);
    char y[100];
    int lenX = strlen(x);
    int lenY = strlen(y);

    fgets(y, 20, stdin);
    printf("%d\t%d\n", lenX, lenY);
    printf("%s %s", x, y);
    return 0;
}