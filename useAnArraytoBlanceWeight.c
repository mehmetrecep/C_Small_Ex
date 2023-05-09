#include <stdio.h>

int main(void){
    int numberOfCars;
    scanf("%d",&numberOfCars);
    double array[numberOfCars];
    double totalWeight = 0;
    for(int i = 0; i < numberOfCars; i++){
        scanf("%lf",&array[i]);
        totalWeight += array[i];
    }
    
    double averageWeight = totalWeight / numberOfCars;
    
    for(int j = 0; j < numberOfCars; j++){
        printf("%.1lf\n", averageWeight - array[j]);
    }
    return 0;
}