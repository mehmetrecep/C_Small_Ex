#include <stdio.h>

int sumOfDigits(int);
int main(void){
    int number, sum;
    scanf("%d",&number);
    sum = sumOfDigits(number);
    printf("%d",sum);
    return 0;
    
}
int sumOfDigits(int number){
    
    if(number == 0){
        return 0;
    }else {
        return (number % 10) + sumOfDigits(number / 10);
    }
}