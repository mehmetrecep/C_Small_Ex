#include <stdio.h>

int main(void){
    char word[50];
    scanf("%s", word);
    int num = 0;
    int i = 0;
    while(word[i]!='\0'){
        num++;
        i++;
    }
    if(num%2==0){
        printf("1");
    }else{
        printf("2");
    }
    return 0;
}