#include <stdio.h>
int main()
{
    int sum = 0;
    int value;
    scanf("%d", &value);
    for (int i = 1; i <= value; i++)
    {
        sum += i; 
    }
    printf("%d", sum);
    return 0;
}
