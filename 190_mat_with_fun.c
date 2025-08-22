// wap to sum two matrix .
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
void perform_sum(int r, int c, int mat1[r][c], int mat2[r][c], int matsum[r][c])
{
    int i, j;
    for (i = 0; i < r; i++) // 0
    {
        for (j = 0; j < c; j++) // 1
        {
            matsum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
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
    inputmat(r, c, mat1);
    printf("enter matrix2 elements : \n");
    inputmat(r, c, mat2);
    printf("matrix1 element are : \n");
    displaymat(r, c, mat1);
    printf("matrix2 element are : \n");
    displaymat(r, c, mat2);
    // sum two matrix
    perform_sum(r, c, mat1, mat2, matsum);

    printf("matrixsum element are : \n");
    displaymat(r, c, matsum);
}