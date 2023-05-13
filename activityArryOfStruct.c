#include <stdio.h>

struct point {
    double x;
    double y;
};
void readPoint(struct point *pt);
void printPoint(struct point);
void printPentagon(struct point *ptr);

int main(void){
    struct point pentagon[6];
    for(int i = 0; i < 6; i++){
        readPoint(&pentagon[i]);
    }
    //pentagon[4].y = 4.1;
    //(pentagon+4)->y = 4.1;
    
    printPentagon(pentagon);
    return 0;
}
void readPoint(struct point *ptr){
    printf("\nEnter a new point: \n");
    printf("x-coordinate : ");
    scanf("%lf",&ptr->x);
    printf("y-coordinate : ");
    scanf("%lf",&ptr->y);
};
void printPoint(struct point pt){
    printf("(%lf, %lf)\n", pt.x, pt.y);
};
void printPentagon(struct point *ptr){
    for(int i = 0; i < 6; i++){
        printPoint(ptr[i]);
    }
};
