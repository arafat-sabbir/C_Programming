#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int onePersonTime = m1 * d;
        int totalPersonTime = onePersonTime / (m1 + m2);
        printf("%d\n", d - totalPersonTime);
        // printf(" %d %d %d\n", m1, m2, d);
    }
    return 0;
}