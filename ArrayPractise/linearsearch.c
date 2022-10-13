// Program to linearly search array element
#include <stdio.h>

int main()
{
    int a[10],n,i,se;
    printf("Enter the size of the array");
    scanf("%d",&n);
    if(n>10)
    printf("Overflow");
    else{
        printf("Enter the array elements:");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Enter the element to be searched:");
        scanf("%d",&se);
        for(i=0;i<n;i++)
            if(se==a[i])
            break;


        if (i<n)
        printf("Element found at %d",i+1);
        else
        printf("Element not found");
        
    }
    return 0;
}