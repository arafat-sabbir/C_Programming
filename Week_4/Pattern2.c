#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d",&a);
    b = a - 1;
    c = 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= c; j++)
        {
            printf("*");
        }
        b--;
        c = c + 2;
        printf("\n");
    }
    return 0;
}