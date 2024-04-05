#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    // int b = scanf("%d",&b);
    if (a % 2 == 0)
    {
        printf("%d Even Number", a);
    }
    else
    {
        printf("%d Odd Number", a);
    }
    return 0;
}