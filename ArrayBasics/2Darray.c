#include <stdio.h>

int main(){
    int a[2][3],i,j;
    printf("Enter the array elements:");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The array elements are:");
    for(i=0;i<2;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
    }
    return 0;
}