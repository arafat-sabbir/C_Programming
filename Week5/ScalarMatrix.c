#include <stdio.h>
int main()
{
    int col, row;
    scanf("%d %d", &col, &row);
    int arr[col][row];
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 1;
    if (row != col)
    {
        flag = 0;
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != arr[0][0])
                {
                    flag = 0;
                }
            }
            else if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag)
    {
        printf("Scalar  Matrix");
    }
    else
    {
        printf("Not Scalar Matrix");
    }
    return 0;
}