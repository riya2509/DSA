#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sum[10][10], r, c, i, j;
    printf("Enter the number of rows:\n");
    scanf("%d", &r);
    printf("Enter the number of columns:\n");
    scanf("%d", &c);

    printf("Enter the array elements of 1st matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);// &a[i][j]=(*(a+i)+j)
        }
    }
    printf("Enter the array elements of 2nd matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // adding 2 matrices
    for (i = 0; i < r; i++)
    {
        for (j < 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // printing the result
    printf("Matrix 1 is:\n");
    for (i = 0; i < r; i++)
    { printf("\n");
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }
    printf("\nMatrix 2 is:\n");
    for (i = 0; i < r; i++)
    { printf("\n");
        for (j = 0; j < c; j++)
        {
            printf("%d\t", b[i][j]);
        }
    }
    printf("\nSum of matrix 1 and 2 is:\n");
    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < c; j++)
        {
         printf("%d\t", sum[i][j]);
        }
    }
    return 0;
}