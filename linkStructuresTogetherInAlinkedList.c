#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
    struct point *next;
};
void printPoints(struct point *start);
// void append(struct point *end, struct point *start);
struct point * append (struct point *, struct point *);
struct point *creatPoint(int , int);
void freePointer(struct point *start);
int main(void){
    /*
    struct point pt1 = {1,2, NULL};
    struct point pt2 = {-2,3, NULL};
    struct point pt3 = {5, -4, NULL};
    struct point *start, *ptr;
    */
    
    /*
    start = &pt1;
    pt1.next = &pt2;
    pt2.next = &pt3;
    */

    /*
    printf("pt1 address :%p\n",&pt1);
    printf("%p\n",pt1.next);
    printf("pt2 address :%p\n",&pt2);
    printf("%p\n",pt2.next);
    */

    struct point *start, *end , *pt;
    int num, i;
    int x, y;
    printf("How many points? ");
    scanf("%d ", &num);

    for(i = 0; i < num; i++){
        printf("x = ");
        scanf("%d",&x);
        printf("y = ");
        scanf("%d",&y);
        pt = creatPoint(x,y);
        if(i == 0){
            start = end = pt;
        }else{
            end = append(end,pt);
        }
    }
     printPoints(start);
    /*
        start = end = &pt1;
        end = append(end,&pt2);
        end = append(end,&pt3);
    */
    freePoint(start);
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
/*
void append(struct point *end, struct point *start){
    end->next = start;
};
*/


struct point * append (struct point * end, struct point * pt) {
    end->next = pt;
    return(end->next);
} 

struct point *creatPoint(int x, int y){
    struct point *ptr;
    ptr = (struct point *)malloc(sizeof(struct point));
    ptr->x = x;
    ptr->y = y;
    ptr->next = NULL;
    return ptr;
};

void freePointer(struct point *start){
    struct point *ptr;
    while(ptr != NULL){
        start = ptr;
        ptr = ptr->next;
        free(start);
    }
}