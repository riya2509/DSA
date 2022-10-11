// Finding the min and max number in array
#include <stdio.h>

int main()
{
    int a[10][10], i, j, r, c, min=a[0][0],max=a[0][0];
    printf("Enter the number of rows:");
    scanf("%d", &r);
    printf("Enter the number of columns:");
    scanf("%d", &c);

    printf("Enter the array elements:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
         if(a[i][j]<min)
         min=a[i][j];
        }
    }
    printf("The minimal element is %d",min);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
         if(a[i][j]>max)
         max=a[i][j];
        }
    }
    printf("The maximum element is %d",max);
    
    return 0;
}