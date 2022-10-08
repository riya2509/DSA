#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess,nguess=0;
    srand(time(0));
    number=rand()%100 + 1;
    printf("The number is: %d",number);
    do{
        printf("Enter the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess<number)
        printf("Enter larger number!\n");
        else if (guess>number)
        printf("Enter smaller number!\n");
        else
        printf("You guessed it in %d attempts\n",nguess);
        nguess++;
    }
    while(guess!=number);
    return 0;


}