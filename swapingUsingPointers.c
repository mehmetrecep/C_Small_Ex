#include <stdio.h>

int swap(int *, int *);
int main(void){
    int a = 5;
    int b = 1;
    printf("%p\n %p\n",&a,&b);
    swap(&a,&b); 
    printf("%d %d\n",a,b);
    printf("%p\n %p\n",&a,&b);
    return 0;
}
int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}