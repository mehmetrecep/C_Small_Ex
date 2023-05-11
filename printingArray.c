#include <stdio.h>

void print(int*);
int main(void){
    int arr[] = {6, 2, -4, 8, 5, 1};
    print(arr);
    printf("\n");
    return 0;
}

void print(int * prt){
    for(int i = 0; i < 6; i++){
        printf("%d ",*(prt+i));
    }
}