#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int a = 3, b = 8;
    printf("Value before swapping %dand %d\n", a, b);
    wrong_swap(a, b); // will not work due to call by value
    printf("Value after swapping %dand %d\n\n", a, b);
    printf("Value before swapping %dand %d\n", a, b);
    swap(&a, &b); // will work due to call by reference
    printf("Value after swapping %dand %d\n\n", a, b);
    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}