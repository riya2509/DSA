#include <stdio.h>

int main()
{
    int a[10], beg = 0, end, i, n, se, mid;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    if (n > 10)
        printf("Overflow");
    else
    {
        printf("Enter the array elements:");
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        printf("Enter the search element:");
        scanf("%d", &se);

        end = n - 1;
        mid = (beg + end) / 2;
        while (beg <= end)
        {
            if (se == a[mid])
            {
                printf("The array element %d found at %dth position", se, mid+1);
                break;
            }
            else if (se < a[mid])
            {
                end = mid - 1;
                mid = (beg + end) / 2;
            }
            else if (se > a[mid])
            {
                beg = mid + 1;
                mid = (beg + end) / 2;
            }
            else
                printf("Element not found!");
        }
        return 0;
    }
}