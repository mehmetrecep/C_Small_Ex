#include <stdio.h>


struct student {
    char firstName[30];
    char secondName[30];
    int birthYear;
    int idNum;
};
void printStudent(struct student);
int main(void){
    struct student std_1 = {"Mohamed", "Ragab", 2001, 1234};
    struct student std_2 = {"Salah", "Ragab", 1994, 1234};
    printStudent(std_1);
    printStudent(std_2);
    return 0;
}
void printStudent(struct student std){
    printf("first name : %s\n",std.firstName);
    printf("second name : %s\n ",std.secondName);
    printf("birth year : %d\n",std.birthYear);
    printf("id number : %d\n",std.idNum);
};