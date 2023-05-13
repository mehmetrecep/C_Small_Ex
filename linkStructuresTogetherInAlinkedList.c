#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
    struct point *next;
};
void printPoints(struct point *start);
int main(void){
    struct point pt1 = {1,2, NULL};
    struct point pt2 = {-2,3, NULL};
    struct point pt3 = {5, -4, NULL};
    struct point *start, *ptr;
    start = &pt1;
    pt1.next = &pt2;
    pt2.next = &pt3;

    /*
    printf("pt1 address :%p\n",&pt1);
    printf("%p\n",pt1.next);
    printf("pt2 address :%p\n",&pt2);
    printf("%p\n",pt2.next);
    */
    printPoints(start);

    return 0;
}

void printPoints(struct point *start){
    struct point *ptr;
    ptr = start;
   while(ptr != NULL){
    printf("(%d, %d)\n", ptr->x, ptr->y);
    printf("%p\n", ptr);
    ptr = ptr->next;
    }
}