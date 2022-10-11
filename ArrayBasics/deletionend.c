// deleting an element in the end of an array
#include <stdio.h>

int main()
{
    int a[20], i, n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    if (n > 20)
        printf("Overflow");
    else
    {
        printf("Enter the array elements:\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Deleting the last array element...\n");
        n--;
        printf("The array elements are:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}