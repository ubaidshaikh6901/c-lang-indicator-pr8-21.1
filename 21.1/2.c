#include <stdio.h>
int cube(int *num)
{
    return (*num) * (*num) * (*num);
}

int main()
{
    int row, col;
    printf("Enter array's size: ");
    scanf("%d", &row);
    col = row;
    int a[row][col];

    printf("Enter array elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Cubes of all elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", cube(&a[i][j]));
        }
        printf("\n");
    }

    return 0;
}