#include <stdio.h>

int main(void) {
    char type;
    int num;
    scanf("%c %d", &type, &num);
    
    int size;
    if (type == 'i') {
        size = sizeof(int);
    } else if (type == 's') {
        size = sizeof(short);
    } else if (type == 'c') {
        size = sizeof(char);
    } else if (type == 'd') {
        size = sizeof(double);
    } else {
        printf("Invalid data type.\n");
        return 0;
    }
    
    long long total_size = (long long)size * num;
    int bytes = total_size % 1000;
    total_size /= 1000;
    int kilobytes = total_size % 1000;
    total_size /= 1000;
    int megabytes = total_size;
    
    if (megabytes > 0) {
        printf("%d MB", megabytes);
        if (kilobytes > 0 || bytes > 0) {
            printf(" and ");
        }
    }
    if (kilobytes > 0) {
        printf("%d KB", kilobytes);
        if (bytes >= 0) {
            printf(" and ");
        }
    }
    if (bytes >= 0 || (megabytes == 0 && kilobytes == 0)) {
        printf("%d B", bytes);
    }
    printf("\n");
    
    return 0;
}
