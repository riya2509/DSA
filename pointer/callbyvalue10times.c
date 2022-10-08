#include <stdio.h>
void change(int b);
int main(){
    int a;
    printf("Enter the value of a");
    scanf("%d",&a);
    change(a);
    printf("Value after changing is : %d",a);
   return 0;
}
void change(int b){
   b=b*10;
}