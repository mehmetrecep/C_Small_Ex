#include <stdio.h>

void setToZero(short **);
int main(void){
    short a[3] = {234,655,843};
    short b[3] = {12,62,30};
    short c[4] = {3456,3467,23,276};
    short d[4] = {45,78,90};

    short *arr[4] = {a,b,c,d};
    setToZero(arr);
    for(int i = 0; i < 13; i++){
        printf("%d \n",*(*arr+i));
    }
    
}
void setToZero(short **arr){
    /*
     *((*arr) + 0) = 1;
        *(*(arr+1) + 1) = 1;
        *(*(arr+2)+ 1) = 1;
        *(*(arr) + 2) = 3;
        *(*(arr+3) + 2) = 9;
        *((*arr) + 2) = 30;
    */
       
        *(*(arr+2) + 1) = 10;
}