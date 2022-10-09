#include <stdio.h>

int main(){
    int a[20],n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The elements in the array are:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}