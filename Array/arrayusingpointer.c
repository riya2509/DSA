#include <stdio.h>

int main()
{
    int a[20], i, n;
    int *q=a;
    printf("Enter the number of array elements:");
    scanf("%d", &n);
    if (n > 20)
        printf("Overflow");
    else
    {
     printf("Enter the array elements:");
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);//&i[a], &(a+i), &(q+i)
             }
     printf("The array elements are:");
     for(i=0;i<n;i++){
        printf("%d\n",*(q+i));
     }
    }
    return 0;
}