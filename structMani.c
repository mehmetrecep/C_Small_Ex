#include <stdio.h>
#include <stdlib.h>


struct library{
    char name_Of_Book[60];
    int number_Of_pages;
};
void read(struct library *);
int main(void){
    struct library lib_1;
    read(&lib_1); 
    printf("%s %d", lib_1.name_Of_Book, lib_1.number_Of_pages);
    printf("\n%p\n", &lib_1);
    struct library *ptr = &lib_1;
    *ptr->name_Of_Book = 4;
    printf("%d", lib_1.number_Of_pages);
    return 0;
}

void read(struct library *lib){
    printf("Enter the name of the book: ");
    scanf("%s", lib->name_Of_Book);
    printf("Enter the number pages: ");
    scanf("%d", &lib->number_Of_pages);
}
