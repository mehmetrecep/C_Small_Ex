#include <stdio.h>

int main(void){
    int n, facto, i;
    printf("Please enter a positive integer: ");
    scanf("%d",&n);
    facto = 1;
    for(i = 0; i <= n; i++){
        facto = i * facto;
    }
    if(n<0){
        printf("%d is negative ! Aborting..\n",n);
    }else{
        printf("%d! = %d.\n", n , facto);
    }
    return 0;
}