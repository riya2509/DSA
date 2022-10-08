#include <stdio.h>

int main(){
    int i=5;
    int *j=&i;
    printf("The adress of i is %d\n",j);
    printf("The value of i is %d\n",*j);
    return 0;
}