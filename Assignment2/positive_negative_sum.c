#include <stdio.h>
int main()
{
    int a;
    int positiveSum = 0;
    int negativeSum = 0;
    scanf("%d", &a);
    int listOfNumber[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &listOfNumber[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (listOfNumber[i] > 0)
        {
            positiveSum = positiveSum + listOfNumber[i];
        }
        else
        {
            negativeSum += listOfNumber[i];
        }
    }
    printf("%d\t%d ", positiveSum, negativeSum);
    return 0;
}