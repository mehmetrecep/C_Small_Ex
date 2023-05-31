#include <stdio.h>
#include <stdlib.h>

struct digit{
    int num;
    struct digit *next;
};
struct digit *creatDigit(int dig);
struct digit *append(struct digit *end, struct digit *newDigit);
int main(int argc, char *argv[]){
    struct digit *start, *end , *newDigitPtr;
    int first = 3;
    start = creatDigit(first);
    end = start;
    int second = 4;
    newDigitPtr = creatDigit(second);
    printf("%p\n",start);
    printf("%p\n",start->next);
    end = append(end , newDigitPtr);
    printf("%p\n",end);
    printf("%p\n",end->next);
    int third = 5;
    newDigitPtr = creatDigit(third);
    end = append(end , newDigitPtr);
    printf("%p\n",end);
    printf("%p\n",end->next);
    return 0;
}
struct digit *creatDigit(int dig){
    struct digit *ptr;
    ptr = (struct digit *)malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}
struct digit *append(struct digit *end, struct digit *newDigit){
    end->next = newDigit;
    end = newDigit;
    return end;
}
