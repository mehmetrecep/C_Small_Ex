#include <stdio.h>

int main(void){
    int a = 42;
    double d = 58.394;
    char c = 'r';

    int *addressOfA = &a;
    double *addressOfd = &d;
    char *addressOfc = &c;
    printf("The address of a is %p\n",addressOfA);
    printf("The address of d is %p\n",addressOfd);
    printf("The address of c is %p\n",addressOfc);
    return 0;
}