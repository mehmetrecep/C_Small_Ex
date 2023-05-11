#include <stdio.h>

void reverse(int *);
int main(void){
    int arr[6];
    int i;
    for(i = 0; i < 6; i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr);
    for(i = 0; i < 6; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reverse(int * arr){
    int temp;
    for(int i = 0; i < 3; i++){
        temp = *(arr + i);
        *(arr + i) = *(arr + 5 - i);
        *(arr + 5 - i) = temp;
    }
}
/*
*/