#include <stdio.h>

int main(void){
    char word[50];
    scanf("%s", word);
    int n = 0;
    char temp;
    int repeated = 0;
    while(word[n] != '\0'){
        n++;
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(word[j]> word[j+1]){
                temp = word[j+1];
                word[j+1] = word[j];
                word[j] = temp;
            }
        }
    }
    
    for(int t = 0; t < n; t++){
        if(word[t] == word[t+1]){
            repeated++;
            while (t < n - 1 && word[t] == word[t+1]) {
                t++;
            }
        }
    }
    printf("%d ", repeated);
    return 0;
}