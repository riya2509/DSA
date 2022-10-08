#include <stdio.h>
void sumandavg(int a , int b, int *sum, float *avg);
int main(){
    int a=3 ,b=4 , sum;
    float avg;
    sumandavg(a,b,&sum,&avg);
    printf("The sum is %d",sum);
    printf("The average is %f", avg);
    return 0;
}
void sumandavg(int a , int b,int *sum, float *avg){
    *sum=a+b;
    *avg=(float)(*sum)/2;
}