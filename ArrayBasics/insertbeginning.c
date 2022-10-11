// insertion at the beginning of the array
#include <stdio.h>

int main()
{
    int a[20], i, n, num;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    if (n > 20)
        printf("Overflow\n");
    else
    {
        printf("Enter the elements:\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Enter the number to be inserted:\n");
        scanf("%d", &num);
        for (i = n - 1; i >= 0; i--)
        {
            a[i+1]=a[i];
        }
        a[0]=num;
        n++;
        printf("The elements of the array are:");
        for(i=0;i<n;i++){
            printf("%d\n",a[i]);
        }
    }
    return 0;
}