#include <stdio.h>

int main(){
    int a[10][10],i,j,r,c,sum=0;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns:");
    scanf("%d",&c);
    
    printf("Enter the array elements:");
    for(i=0;i<r;i++){
for(j=0;j<c;j++){
    scanf("%d",&a[i][j]);
}
    }
    for(i=0;i<r;i++){
for(j=0;j<c;j++){
    sum=sum+a[i][j];
}
    }
    printf("The sum of elements in the array= %d",sum);
    return 0;
}