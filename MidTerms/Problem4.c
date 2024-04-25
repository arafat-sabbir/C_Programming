#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int cap = 0;
        int low = 0;
        int dig = 0;
        char arr[10001];
        scanf("%s", arr);
        for (int i = 0; i < strlen(arr); i++)
        {
            if (arr[i] >= 'a' && arr[i] <= 'z')
            {
                low++;
            }
            else if (arr[i] >= 'A' && arr[i] <= 'Z')
            {
                cap++;
            }
            else if (arr[i] >= '0' && arr[i] <= '9')
            {
                dig++;
            }
        }
        printf("%d\t%d\t%d\n", cap, low, dig);
    }

    return 0;
}