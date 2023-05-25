#include <stdio.h>
#include <stdlib.h>


void setToZero(short **);
int main(int argc, char **argv){
    
    short a[3] = {1234, 1924, 234};
    short b[2] = {24, 256};
    short *t[2] = {a,b};
    setToZero(t);
    for(int i = 0; i < 9; i++){
        printf("%d\n", *(*t+i));
    }
    return 0;
}

void setToZero(short **t){
    *(*t) = 0;
}
