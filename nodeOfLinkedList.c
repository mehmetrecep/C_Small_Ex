#include <stdio.h>
#include <stdlib.h>

struct digit{
    int digit;
    struct digit *next;
};
struct digit *creatDigit(int);
int main(void){
    struct digit *numberptr;
    int digitToStore = 5;
    numberptr = creatDigit(digitToStore);
    printf("We are storing the digit %d and the pointer %p at memory location %p.\n", numberptr->digit,numberptr->next, numberptr);
    return 0;
}

struct digit *creatDigit(int dig){
    struct digit * ptr;
    ptr = (struct digit *)malloc(sizeof(struct digit));
    ptr->digit = dig;
    ptr->next = NULL;
    return ptr;
}