//insertion at the end of the array
#include <stdio.h>

int main()
{
    int a[20], i, n, num;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    if (n > 20)
        printf("Overflow");
    else
    {
        printf("Enter the elements");
        for (i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter the number to be inserted:");
        scanf("%d",&num);
        a[n]=num;
        n++;
        printf("The elements of the array are:");
        for(i=0;i<n;i++){
            printf("%d\n",a[i]);
        }

    }
    return 0;
}