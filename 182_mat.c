#include <stdio.h>
void main()
{
    int mat[3][3] = {{12, 34, 56}, {11, 22, 33}, {66, 67, 89}};
    int i, j;
    printf("matrix element are : \n");
    for (i = 0; i < 3; i++) // 1
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}