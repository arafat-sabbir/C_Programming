#include <stdio.h>
#include <stdlib.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n], brr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            brr[i] = arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (brr[i] > brr[j])
                {
                    int temp = brr[j];
                    brr[j] = brr[i];
                    brr[i] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", abs(brr[i] - arr[i]));
        }
        printf("\n");
    }
    return 0;
}