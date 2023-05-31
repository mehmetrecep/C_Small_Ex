#include <stdio.h>

int main(void){
    int arr_1[3] = {1,3,4};
    int arr_2[3] = {5,6,7};
    int arr_3[3] = {8,9,1};
    
    // for (int i = 0; i < 3; i++){
    //     scanf("%d ",arr_1+i);
    // }
    // for (int j = 0; j < 3; j++){
    //     scanf("%d ",arr_2+j);
    // }
    // for (int t = 0; t < 3; t++){
    //     scanf("%d ",arr_3+t);
    // }
    
    int *array[3] = {arr_1,arr_2,arr_3};
    printf("%d \n",*((*array)+1));
    return 0;
}