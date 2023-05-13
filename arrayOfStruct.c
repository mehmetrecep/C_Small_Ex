#include <stdio.h>

struct point{
    double x;
    double y;
};
void printPoint(struct point pt);
void readPoint(struct point *ptr);
void printTriangle(struct point *ptr);
int main(void){
    struct point triangle[3];
    for(int i = 0; i < 3; i++){
        readPoint(&triangle[i]);
    }
    
    printTriangle(triangle);
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
    printf("(%lf, %d)\n", pt.x, pt.y);
};
void printTriangle(struct point *ptr){
    for(int i = 0; i < 3; i++){
        printPoint(ptr[i]);
    }
};

