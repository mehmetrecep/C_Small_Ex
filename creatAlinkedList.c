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
struct digit *readNumber();
int main(int argc, char *argv[]){

    struct digit *start;
    start = readNumber();
    printNumber(start);
    freeNumber(start);
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
struct digit *readNumbers(){
    char c;
    int d;
    struct digit *start, *end , *newDigit;
    start = NULL;
    scanf("%c",&c);
    while(c != '\n'){
        d = c - 48;
        newDigit = creatDigit(d);
        if(start == NULL){
            start = newDigit;
            end = start;
        }else{
            end = append(end, newDigit);
        }
        scanf("%c",&c);
    }
    return start;
}