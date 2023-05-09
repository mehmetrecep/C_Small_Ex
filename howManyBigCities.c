#include <stdio.h>

int main(void){
    int numberOfCities;
    scanf("%d", &numberOfCities);
    int array[numberOfCities];
    int num = 0;
    for(int i = 0; i < numberOfCities; i++){
        scanf("%d", &array[i]);
        if(array[i] > 10000){
            num++;
        }
    }
    printf("%d\n", num);
    return 0;
}