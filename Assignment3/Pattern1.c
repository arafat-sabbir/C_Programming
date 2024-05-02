#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, s, k = 1;
    scanf("%d", &n);
    s = n - 1;
    bool flag = false;
    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            if (flag)
            {
                printf("-");
            }
            else
            {

                printf("#");
            }
        }
        flag = !flag;
        printf("\n");
        if (i <= n - 1)
        {
            s--;
            k += 2;
        }
        else
        {
            s++;
            k -= 2;
        }
    }
    return 0;
}