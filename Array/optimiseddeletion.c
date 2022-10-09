#include <stdio.h>

int main()
{
    int a[20], i, n, pos;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    if (n > 20)
        printf("Overflow");
    else
    {
        printf("Enter the elements:");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        
        printf("Enter the position of the number to be inserted:");
        scanf("%d",&pos);
        if(pos<=0||pos>n+1)
        printf("Invalid position");
        else{
        a[n]=a[pos-1];
        n--;
       
        printf("The elements are:");
        for(i=0;i<n;i++){
            printf("%d\n",a[i]);
        }
        }

    }
    return 0;
}