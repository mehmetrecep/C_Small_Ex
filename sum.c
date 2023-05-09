#include <stdio.h>

int sum(int a, int b){
    int result = a + b;
    return result;
}

int main(void){
    int a, b;
    scanf("%d %d",&a, &b);
    int result = sum(a, b);
    printf("The result is %d \n", result);
    return 0;
}