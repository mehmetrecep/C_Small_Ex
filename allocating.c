#include <stdio.h>
#include <stdlib.h>

int main(void){
    int ptr;
    scanf("%d",&ptr);
    int *pointer;
    pointer = (int *)malloc(ptr);
    printf("the value of a is %d and the address is %p\n",ptr, pointer);
    return 0;
}