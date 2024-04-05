#include <stdio.h>
int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int different = (a * b) - (c*d);
    printf("Difference = %lld", different);
    return 0;
}