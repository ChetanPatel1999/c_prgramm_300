// wap to take two matrix and display multiplication of matrix.
//  wap to sum two matrix .
#include <stdio.h>
void displaymat(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++) // 1
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
void inputmat(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++) // 1
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}
void perform_multiplication(int r1, int c1, int r2, int c2, int mat1[r1][c1], int mat2[r2][c2], int matmul[r1][c2])
{
    int i, j, k, sum;
    if (c1 == r2)
    {
        for (i = 0; i < r1; i++) // 0
        {
            for (j = 0; j < c2; j++) // 1
            {
                sum = 0;
                for (k = 0; k < c1; k++) // 1
                {
                    sum = sum + mat1[i][k] * mat2[k][j];
                }
                matmul[i][j] = sum;
            }
        }
    }
    else
    {
        printf("we cant done multiplication ");
    }
}
void main()
{
    int r1, c1, r2, c2;
    printf("enter row1 : ");
    scanf("%d", &r1);
    printf("enter column1: ");
    scanf("%d", &c1);
    printf("enter row2 : ");
    scanf("%d", &r2);
    printf("enter column2: ");
    scanf("%d", &c2);
    int mat1[r1][c1], mat2[r2][c2], matmul[r1][c2];
    int i, j;
    printf("enter matrix1 elements : \n");
    inputmat(r1, c1, mat1);
    printf("enter matrix2 elements : \n");
    inputmat(r2, c2, mat2);
    printf("matrix1 element are : \n");
    displaymat(r1, c1, mat1);
    printf("matrix2 element are : \n");
    displaymat(r2, c2, mat2);
    // multiplication two matrix
    perform_multiplication(r1, c1, r2, c2, mat1, mat2, matmul);

    if (c1 == r2)
    {
        printf("matrixsum element are : \n");
        displaymat(r1, c2, matmul);
    }
}