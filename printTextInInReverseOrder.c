#include <stdio.h>

int main(void){
    char word[68][41];
    int count = 0;

    while(scanf("%40s",word[count]) == 1){
        count++;
    }
    for (int i = count -1; i < 0; i--)
    {
        printf("%s ", word[i]);
    }
    printf("\n");
    return 0;
    
}