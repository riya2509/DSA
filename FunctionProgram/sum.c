#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 4, b = 7;
    printf("The value after adding 4 and 7 is %d", sum(a, b));
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}