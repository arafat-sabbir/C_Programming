#include <stdio.h>
int main()
{
    int col, row;
    scanf("%d %d", &col, &row);
    int arr[col][row];
    int element = col * row;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count == element)
    {
        printf("Zero Or Null Matrix");
    }
    else
    {
        printf("Not Null Or Zero Matrix");
    }
    return 0;
}