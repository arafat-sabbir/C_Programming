#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    int limit = 0;
    int s = (n + 1) / 2 + 5 - 1;
    for (int i = 0; i <= n + 10; i++)
    {
        for (int i = 0; i < s; i++)
        {
            printf(" ");
        }
        s--;
        limit++;
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        printf("\n");
        if (i == (n + 1) / 2 + 5 - 1)
        {
            break;
        }
        k += 2;
    }
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <=4; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}