#include <stdio.h>

int main(void){
    int age;
    int luggageWeight;
    scanf("%d",&age);
    scanf("%d",&luggageWeight);
    if(age == 60 ){
        printf("%d",0);
    }else if(age < 10 ){
        printf("%d",5);
    }else if(luggageWeight > 20){
        printf("%d",40);
    }else{
        printf("%d",30);
    }
    return 0;
}