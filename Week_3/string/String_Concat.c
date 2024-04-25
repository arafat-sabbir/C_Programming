#include <stdio.h>
#include <string.h>
int main()
{
    int size;
    scanf("%d", &size);
    char a[size];
    char b[100];
    scanf("%s %s", a, b);
    strcat(a, b);
    printf("%s\n", a);
    int ab = size;
    for (int i = 0; i <= strlen(b); i++)
    {
        a[ab + 1] = b[i];
        ab++;
    }
    printf("%s", a);
    return 0;
}