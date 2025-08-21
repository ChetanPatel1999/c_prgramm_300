#include <stdio.h>
void main()
{
    int mat[3][2] = {{12, 34}, {11, 22}, {66, 67}};
    int i, j;
    printf("matrix element are : \n");
    for (i = 0; i < 3; i++) // 1
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}