#include <stdio.h>

int main(void){
    
    int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5}; /* unsorted list */
    int n = 10;
    int swap;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if(list[j] > list[j+1]){
                swap = list[j + 1];
                list[j + 1] = list[j];
                list[j] = swap;
            }
        }
    }
    for (int t = 0; t < 10; t++)
    {
        printf("%d ", list[t]);
    }

        return 0;
}