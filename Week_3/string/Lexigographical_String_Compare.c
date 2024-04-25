#include <stdio.h>
int main()
{
    char a[100];
    char b[100];
    scanf("%s %s", a, b);
    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same Same f1");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A is Smaller f1");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B is Smaller f1");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("a is smaller f2");
            break;
        }
        else
        {
            printf("b is Smaller f2");
            break;
        }
    }

    return 0;
}