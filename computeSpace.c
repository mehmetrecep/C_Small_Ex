#include <stdio.h>

int main(void){
    int numberOfCodes;
    int total = 0;
    scanf("%d",&numberOfCodes);
    char data_Type;
    int num;
    for(int i = 1; i <= numberOfCodes; i++){
        scanf("%d %c", &num, &data_Type);
        
        if(data_Type == 'c'){
            total += num * sizeof(char);
        }else if(data_Type == 'd'){
            total += num * sizeof(double);
        }else if(data_Type == 'i'){
            total += num * sizeof(int);
        }else{
            printf("Invalid tracking code type\n");
            return 1;
        }
    }
    printf("%d bytes\n", total);
    return 0;
}