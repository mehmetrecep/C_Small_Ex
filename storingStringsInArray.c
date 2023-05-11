#include <stdio.h>

int main(void){
    char a[4];
    char b[5];
    char c[9];
    char *word[3] = {a,b,c};
    printf("Please enter a word with at most letters: ");
    scanf("%s ", a);
    printf("Please enter a word with at most letters: ");
    scanf("%s ", b);
    printf("Please enter a word with at most letters: ");
    scanf("%s ", c);
    return 0;
}