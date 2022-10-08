#include <stdio.h>
void change(int *ptr);
int main()
{
    int a;
    printf("Enter the value of a");
    scanf("%d", &a);
    int *ptr = &a;
    printf("The current value of a is %d", a);
    change(ptr);
    printf("The changed value of a is %d", *ptr);
    return 0;
}
void change(int *ptr){
    (*ptr)=(*ptr)*10;
}