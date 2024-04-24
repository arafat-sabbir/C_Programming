#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size + 1];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos, val;
    scanf("%d %d", &pos, &val);
    for (int i = size; i >= pos + 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    for (int i = 0; i <= size; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}