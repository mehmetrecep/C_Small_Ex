#include <stdio.h>

int main(void){
    int sum = 0;
    int num;
    while(1){
        scanf("%d",&num);
        if(num == -1){
            break;
        }else{
            sum += num;
        }
    }
    printf("%d",sum);
    return 0;
}