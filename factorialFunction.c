#include <stdio.h>

int factorial(int);
int main(void){
    int fact;
    int n;
    printf("Please Enter number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("%d is ! Aborting..\n",n);
    }
    else{
        fact = factorial(n);
        printf("%d! = %d.\n", n, fact);
    }
    return 0;
}
int factorial(int number){
    int result;
    if(number == 0){
        result = 1;
    }else{
        result = number * factorial(number-1);
    }
    return result;
}