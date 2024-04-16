#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    if (n <= 1000)
    {
        printf("Bad luck!");
    }
    else if (n > 1000)
    {
        printf("I will buy Punjabi\n");
        int moneyLeft = n - 1000;
        if (moneyLeft >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    return 0;
}
