#include <stdio.h>

int main(void){
    int array[10];
    int max = 0;
    for (int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
        if(array[i] > max){
            max = array[i];
        }
    }
    printf("The max number is %d\n", max);
    return 0;
}