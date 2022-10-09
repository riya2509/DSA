#include <stdio.h>

int main()
{
    int a[20], i, n, num, pos;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    if (n > 20)
        printf("Overflow");
    else
    {
        printf("Enter the elements of the array:");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Enter data you want to insert");
        scanf("%d", &num);
        printf("Enter the position you want to enter the number");
        scanf("%d", &pos);
        if(pos<=0||pos>n+1)
        printf("Invalid position");
        else{
            for(i=n-1;i>=pos-1;i--){
                a[i+1]=a[i];//for interchanging the elements
            }
        //printing the number in the position
        a[pos-1]=num;
        n++;
        printf("The elements of the array are:");
        for(i=0;i<n;i++){
            printf("%d\n",a[i]);
        }
        }
    }
    return 0;
}