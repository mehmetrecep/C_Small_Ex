#include <stdio.h>

int main(void){
    char c;
    int i;
    double d;
    char listChar[3];
    int listInt[2];
    double listDouble[3];

    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof(listInt));
    printf("%zu\n", sizeof(double));
    return 0;
}