#include <stdio.h>

int main(void){
    int array[9];
    int ingredient;
    int id;
    int i;
    for(i = 0; i < 10; i++){
        scanf("%d",&ingredient);
        array[i] = ingredient;
    }
    
    scanf("%d",&id);
    printf("%d",array[id]);
    return 0;
}