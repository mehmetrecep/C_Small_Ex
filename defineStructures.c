#include <stdio.h>


struct student
{
    char firstName[30];
    char secondName[30];
    int birthYear;
    double aveGrade;
};

int main(void){
    struct student st_1;
    printf("Enter your first name: ");
    scanf("%s", st_1.firstName);
    printf("Enter your second name: ");
    scanf("%s", st_1.secondName);
    printf("Enter your birth year: ");
    scanf("%d", &st_1.birthYear);
    printf("Your name is %s %s and born in %d.\n", st_1.firstName, st_1.secondName,st_1.birthYear);
    return 0;
}