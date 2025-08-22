// wap to sum two matrix .
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter column: ");
    scanf("%d", &c);
    int mat1[r][c], mat2[r][c], matsum[r][c];
    int i, j;
    printf("enter matrix1 elements : \n");
    for (i = 0; i < r; i++) // 1
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("enter matrix2 elements : \n");
    for (i = 0; i < r; i++) // 1
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("matrix1 element are : \n");
    for (i = 0; i < r; i++) // 1
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("matrix2 element are : \n");
    for (i = 0; i < r; i++) // 1
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    // sum two matrix
    for (i = 0; i < r; i++) // 0
    {
        for (j = 0; j < c; j++) // 1
        {
            matsum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("matrixsum element are : \n");
    for (i = 0; i < r; i++) // 1
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", matsum[i][j]);
        }
        printf("\n");
    }
}