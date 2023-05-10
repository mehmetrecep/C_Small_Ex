#include <stdio.h>

void add(int , int, int *);
int main(void){
    int a, b, sum;
    printf("Please enter two integers: ");
    scanf("%d %d",&a,&b);
    add(a,b,&sum);
    printf("%d + %d = %d\n", a, b , sum);
    return 0;
}
void add(int a, int b, int *sum){
    *sum = a + b;
    printf("Added Numbers in the function\n");
    printf("The result is %d \n",*sum);
}