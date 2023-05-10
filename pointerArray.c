#include <stdio.h>

int main(void){
    int arr[3] = {15,16,17};

    // To show the array element with its address
    for(int i = 0; i < 3; i++){
        printf("%d ",*arr+i);
        printf("%p\n",arr+i);
    }
    return 0;
}