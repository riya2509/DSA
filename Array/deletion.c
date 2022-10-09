#include <stdio.h>

int main()
{
    int a[20], i, n, pos;
    printf("Enter the number of elements");
    scanf("%d", &n);
    if (n > 20)
        printf("Overflow");
    else
    {
       printf("Enter the elements");
       for(i=0;i<n;i++){
    scanf("%d", &a[i]); 
       }
       printf("Enter the position of element to delete");
       scanf("%d",&pos);
       if(pos<=0||pos>n)
       printf("Invalid position");
       else{
        for(i=pos-1;i<n-1;i++){
            a[i]=a[i+1];
        }
        n--;
        printf("The elements are:");
        for(i=0;i<n;i++){
        printf("%d\n",a[i]);
        }
       }
    }
    return 0;
}