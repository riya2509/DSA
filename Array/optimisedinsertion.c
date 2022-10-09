// The optimal way to insert an element in an unsorted array with time complexity theta(1)
#include <stdio.h>

int main()
{
    int a[20], i, n, pos, num;
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
        printf("Enter the number to be inserted:");
        scanf("%d",&num);
        printf("Enter the position of the number to be inserted:");
        scanf("%d",&pos);
        a[n]=a[pos-1];
        a[pos-1]=num;
        n++;
        printf("The elements are:");
        for(i=0;i<n;i++){
            printf("%d\n",a[i]);
        }

    }
    return 0;
}