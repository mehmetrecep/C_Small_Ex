#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

void printPoint(struct point);
void printPoly(struct point *ptr, int num);
void initializePoly(struct point *ptr, int num);

int main(void){
    int numOfVertices;
    struct point *point;
    printf("Enter the number of vertices : ");
    scanf("%d",&numOfVertices);
    point = (struct point *)malloc(numOfVertices * sizeof(struct point));
}
void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

void initializePoly(struct point *ptr, int num){
    int i;
    for(i = 0; i < num; i++){
        ptr[i].x = -i;
        ptr[i].y = i*i;  
    }
}