#include <stdio.h>
void main()
{
    int mat[2][3] = {{12, 34, 18}, {11, 22, 55}};
    int i, j;
    printf("matrix element are : \n");
    for (i = 0; i < 2; i++) // 1
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}