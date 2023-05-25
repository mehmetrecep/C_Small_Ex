#include <stdio.h>
#include <stdlib.h>

int fibonacci(int);
int main(void){
    int n, fib;
    int *ptr = malloc(sizeof(int));
    printf("Which Fibonacci number would you like : ");
    scanf("%d", &n);
    if(n<=0){
        printf("%d is not positive. Aborting!\n", n);
    }else{
        fib = fibonacci(n);
        printf("The %dth fibonacci number is %d.\n", n, fib);
    }
    printf("%p\n",ptr);
    return 0;
}
int fibonacci(int number){
    if(number==1){
        return 0;
    }else if (number == 2)
    {
        return 1;
    }else{
        return (fibonacci(number - 1) + fibonacci(number - 2));
    }
}
