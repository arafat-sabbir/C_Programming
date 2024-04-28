#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    int count[m + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= m; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int count2 = arr[i];
        count[count2]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", count[i]);
    }
    return 0;
}