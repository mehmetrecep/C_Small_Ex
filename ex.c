#include <stdio.h>

void change(int *);
int main(void){
    /*
    int i = 5;
    int *ptr = &i;
    *ptr = 3;
    printf("%d\n",i);
    return 0;
    */
   int arr[] = {0,1,2,3,4};
   int *ptr = arr;
   for(int i = 0; i < 5; i++){
        printf("%d",*(ptr+i));
   }
   printf("\n");
   change(ptr);
   return 0;
}
void change(int *ptr){
    for(int i = 0; i < 5; i++){
        if(i%2==0){
            *(ptr+i) = 2;
            printf("%d",*(ptr+i));
        }else{
            *(ptr+i) = 3;
            printf("%d",*(ptr+i));
        }
       
    }
     printf("\n");
}