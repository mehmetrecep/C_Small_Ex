#include <stdio.h>

/*
        You are conducting a linguistic study and are interested in finding words that contain
        the letter 't' or 'T' in the first half of the word 
        (including the middle letter if there is one). 
        Specifically, if the first half of the word does contain a 't' or a 'T',
        your program should output a 1. If the first half does not contain the letter 't' or 'T',
        but the second half does, then your program should output a 2. 
        Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1. 
        You may assume that the word entered does not have more than 50 letters.


*/

int main(void){
    char word[50];
    scanf("%s", word);
    int length = 0;
    while(word[length] != '\0'){
        length++;
    }
    //apple -1
    //raincoat 2
    //enter 1
    //Taylar 1
    
    int found;
    for(int j = 0; j < 10; j++){
        if((word[length-1] == 't' || word[length-1] =='T')){
            found = 2;
            break;
        }else if((word[j] =='t' || word[j] =='T' ) || 
                (j == length/2 && (word[j] == 't' || word[j] =='T'))){
            found = 1;
            break;
        }else found = -1;
    }
    printf("%d",found);
    return 0;
}