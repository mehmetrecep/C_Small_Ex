#include <stdio.h>

int main(void){
    int numOfWords;
    scanf("%d",&numOfWords);
    char word[101];
    int max = 0;
    int j = 0;
    for(int i = 0; i < 10; i++){
        scanf("%s", word);
        int length = 0;
        j = 0;
        while(word[j++] !='\0'){
            length++;
        }
        if(max<length){
            max = length;
        }
    }
    printf("%d",max);
    return 0;
}