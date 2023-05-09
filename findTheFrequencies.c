#include <stdio.h>

int main(void){
    int numOfWords;
    int length[10];
    char words[11];
    int l;
    for(int i = 0; i < 10; i++){
        length[i] = 0;
    }
    scanf("%d",&numOfWords);
    for(int j = 0; j < numOfWords; j++){
        scanf("%s", words);
        l = 0;
        while(words[l] != '\0'){
            l++;
        }
        length[l]++;
        printf("%s %d ",words,l);
    }
    for(int t = 0; t < 10; t++){
        printf("There are %d words with %d letters.\n",length[t],t);
    }
    return 0;
}