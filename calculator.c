#include <stdio.h>

int main(void){
    int total_size = (36794 * 4);
    int number = (36794 * 4) % 1000;
    int new_number = (36794 * 4) / 1000;
    int bytes = total_size % 1000;
    printf("%d\n",total_size);
    total_size /= 1000;
    printf("%d\n",total_size);
    int kilobytes = total_size % 1000;
    total_size /= 1000;
    printf("%d\n",total_size);
    int megabytes = total_size;
    
    printf("%d\n",number);
    printf("%d\n",bytes);
    printf("%d\n",kilobytes);
    printf("%d\n",megabytes);
    return 0;
    
}