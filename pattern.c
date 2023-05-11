#include <stdio.h>

int main(void){
    int count = 1;
    for(int i = 0; i < 5; i++){
        for(int j = count; j <= count*2; j+=2){
                printf(" %d ",j);
        }
        printf(" \n ");
        count *= 2;
    }
    return 0;
}