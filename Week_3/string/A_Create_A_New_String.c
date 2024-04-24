#include <stdio.h>
#include <string.h>
int main()
{
    char x[1001];
    char y[1001];
    scanf("%s %s",x, y);
    int length1 =  strlen(x);
    int length2 = strlen(y);
    printf("%d %d\n", length1, length2);
    printf("%s %s", x, y);
    return 0;
}