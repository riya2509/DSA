#include <stdio.h>

int main(){
    int a[10][10],i,j,r,c;
    printf("Enter the number of rows:\n");
    scanf("%d", &r);
    printf("Enter the number of columns:\n");
    scanf("%d", &c);

    printf("Enter the array elements of matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);// &a[i][j]=(*(a+i)+j)
        }
    }
    printf("The negative numbers are:\n");
    if(a[i][j]<0)
    printf("%d",a[i][j]);
    else
    printf("No negative numbers.\n");
    return 0;
}