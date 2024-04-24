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
    for (int i = size; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    int pos,val;
    scanf("%d %d",&pos,&val);
    arr[pos] = val;
    for (int i = 0; i <= size; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}