#include <stdio.h>
#include <stdlib.h>

int *allocateInArray(int);
double findAverage(int *,int);
int main(void){
    int num;
    int *array;
    double average;
    printf("How many grades would you like to enter? ");
    scanf("%d",&num);
    array = allocateInArray(num);
    printf("Please enter %d grades: ",num);
    for(int i = 0; i < num; i++){
        scanf("%d ",array+i);
    }

    for (int j = 0; j < num; j++)
    {
        printf("%d ",*(array+j));
    }
    average = findAverage(array,num);
    printf("The average grade is %.2f.\n",average);
    free(array);
    return 0;
}

int *allocateInArray(int num){
    int *ptr = (int *)malloc(num* sizeof(int));
    return ptr;
}
double findAverage(int * array, int num){
    int i;
    double average = 0.0;
    for(i=0;i<num;i++){
        average += array[i];
    }
    average = average / num;
    return average;
}