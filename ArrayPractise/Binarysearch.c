// Implementing binary search
#include <stdio.h>
#include <math.h>
int main()
{
    int a[10], beg = 0, end, mid, n, i, si; // si=search item
    printf("Enter the size of array");
    scanf("%d", &n);
    printf("Enter the array elements in sorted manner :");
    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    printf("Enter the Search item");
    scanf("%d", &si);
    end = n - 1;

    mid = (beg + end) / 2;
    while (beg <= end)
    {

        if (a[mid] == si)
        {
            printf("Elelement %d found at %d", si, mid + 1);
            break;
        }
        else if (si > a[mid])
        {
            beg = mid + 1;
            mid = (beg + end) / 2;
        }
        else if (si < a[mid])
        {
            end = mid - 1;
            mid = (beg + end) / 2;
        }
        else
        {
            printf("Not found!Element isn't present in the list\n");
            
        }
    }
    return 0;
}
