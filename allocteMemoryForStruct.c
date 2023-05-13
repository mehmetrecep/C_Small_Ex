#include <stdio.h>
#include <stdlib.h>

struct point{
    int x; 
    int y;
};
void printPoint(struct point pt);
void readPoint(struct point *ptr);
void printPoly(struct point *ptr, int numOfVertices);
int main(void){
    struct point *polygon;
    int num;
    printf("How many vertices does your polygon have? ");
    scanf("%d",&num);
    polygon = (struct point *)malloc(num*sizeof(struct point));
    for(int i = 0; i < num; i++){
        readPoint(&polygon[i]);
    }
    printPoly(polygon,num);
    return 0;
}
void readPoint(struct point *ptr){
    printf("Enter a new point : \n");
    printf("x-coordinate: ");
    scanf("%d",&ptr->x);
    printf("y-coordinate: ");
    scanf("%d",&ptr->y);
};
void printPoly(struct point *ptr, int num){
    for(int i = 0; i < num; i++){
        printPoint(ptr[i]);
    }
};
void printPoint(struct point pt){
    printf("(%d, %d)\n",pt.x, pt.y);
};