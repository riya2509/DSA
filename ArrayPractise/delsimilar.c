// Program to delete similar elements in an array
#include <stdio.h>

int main(){
    int a[20],n,i,j,k;
    printf("Enter the number of values");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //check similar elements using nested for loop
   for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            //Delete the element
            for(k=j;k<n-1;k++){
                a[k]=a[k+1];
            }
            n--;
            j--;
        }
    }
   }
   //printing the array
   printf("The array after deleting similar elements are:");
    for ( i = 0; i < n; i++)  
    {  
        printf (" %d \t", a[i]);  
    }  
    return 0;
}