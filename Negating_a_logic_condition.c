#include <stdio.h>

int main(void){
    int height;
    int numberOfleaflets;
    scanf("%d",&height);
    scanf("%d",&numberOfleaflets);
    if((height <= 5) && numberOfleaflets >= 8) {
        printf("Tinuviel\n");
    }else if(height >= 10 && numberOfleaflets >= 10){
        printf("Calaelen\n");
    }else if(height <= 8 && numberOfleaflets <= 5){
        printf("Falarion\n");
    }else if(height >= 12 && numberOfleaflets <= 7){
         printf("Dorthonion\n");
    }else{
         printf("Uncertain\n");
    }
    return 0;
}