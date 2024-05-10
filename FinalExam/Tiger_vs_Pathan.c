#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int size;
        scanf("%d", &size);
        char string[size];
        scanf("%s", string);
        int Pathan = 0;
        int Tiger = 0;
        for (int i = 0; i < strlen(string); i++)
        {
            if (string[i] == 'T')
            {
                Tiger++;
            }
            else if (string[i] == 'P')
            {
                Pathan++;
            }
        }
        if (Tiger > Pathan)
        {
            printf("Tiger\n");
        }
        else if (Pathan > Tiger)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}