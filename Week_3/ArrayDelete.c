#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos;
    scanf("%d", &pos);
    for (int i = pos - 1; i < x - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < x-1; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}