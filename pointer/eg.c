#include <stdio.h>

int main(){
    int i = 90;
    int *j=&i;
    printf("The adress of i is: %d",j);
    printf("The value of j is %d",*(&j));
    return 0;
}