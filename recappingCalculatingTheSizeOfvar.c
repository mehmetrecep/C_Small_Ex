#include <stdio.h>

int main(void){
    char typeOfVar;
    int num;
    scanf("%c %d", &typeOfVar, &num);

    int size;
    if(typeOfVar == 'i'){
        size = sizeof(int);
    }else if(typeOfVar == 'c'){
        size = sizeof(char);
    }else if (typeOfVar == 'd')
    {
        size = sizeof(double);
    }else if(typeOfVar == 's'){
        size = sizeof(short);
    }else{
        printf("Invalid data type.\n");
        return 0;
    }
    //To get the total size of variable in memory
    long long total_size = (long long)size * num;
    int bytes = total_size % 1000;
    total_size /= 1000;
    int kilobytes = total_size % 1000;
    total_size /= 1000;
    int megabytes = total_size;

    if(megabytes > 0){
        printf("%d MB", megabytes);
        if(kilobytes > 0 || bytes > 0){
            printf(" and");
        }
    }
    if(kilobytes > 0){
        printf("%d KB",kilobytes);
        if(bytes >= 0){
            printf(" and ");
        }
    }
    if(bytes >= 0 || (megabytes == 0 && kilobytes == 0)){
        printf("%d B",bytes);
    }
    printf("\n");
    return 0;
}
