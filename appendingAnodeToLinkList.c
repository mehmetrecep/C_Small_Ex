#include <stdio.h>
#include <stdlib.h>

struct digit{
    int num;
    struct digit *next;
};
struct digit *creatDigit(int dig);
struct digit *append(struct digit *end, struct digit *newDigit);
void printNumber(struct digit *start);
void freeNumbers(struct digit *start);
int main(int argc, char *argv[]){
    struct digit *start, *end , *newDigitPtr, *tmp;
    int first = 3;
    start = creatDigit(first);
    end = start;
    int second = 4;
    newDigitPtr = creatDigit(second);
    printf("%p\n",start);
    end = append(end , newDigitPtr);
    printf("%p\n",start->next);
    printf("%p\n",end);
    int third = 5;
    newDigitPtr = creatDigit(third);
    end = append(end , newDigitPtr);
    printf("%p\n",end);
    printf("%p\n",end->next);
    printNumber(start);
    tmp = start->next;
    //free(start);
    start = tmp;
    tmp = start->next;
    //free(start);
    //free(tmp);
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
void printNumber(struct digit *start){
    struct digit *ptr = start;
    while (ptr != NULL)
    {
        printf("%d ", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}
void freeNumbers(struct digit *start){
    struct digit *ptr = start;
    struct digit *tmp;
    while(ptr!= NULL){
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}
