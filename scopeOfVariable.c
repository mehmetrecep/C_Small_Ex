#include <stdio.h>
int add(int, int);
int main(void){
    int a = 12;
    int b = 5;
    int sum = add(a,b);
    printf("%d",sum);
    printf("%d",a);
    return 0;
}
int add(int a, int b){
    int sum;
    a = 3;
    sum =  a+b;
    return sum;
}