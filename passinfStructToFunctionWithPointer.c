#include <stdio.h>


struct student{
    char firstName[30];
    char secondName[30];
    char currentStatus[40];
    int age;

};
void readStudent(struct student *stud_ptr);
void printStudent(struct student std);
int main(void){
    struct student std_1;
    readStudent(&std_1);
    printStudent(std_1);
}
void readStudent(struct student *stud_ptr){
    /*
    printf("\nEnter your first name: ");
    scanf("%s",stud_ptr->firstName);
    printf("Enter your second name: ");
    scanf("%s",stud_ptr->secondName);
    printf("Enter your age: ");
    scanf("%d",&stud_ptr->age);
    */
    printf("\nEnter your first name: ");
    scanf("%s",(*stud_ptr).firstName);
    printf("Enter your second name: ");
    scanf("%s",(*stud_ptr).secondName);
    printf("Enter your age: ");
    scanf("%d",&(*stud_ptr).age);
}

void printStudent(struct student std){
    printf("first name : %s\n",std.firstName);
    printf("second name : %s\n ",std.secondName);
    printf("age : %d\n",std.age);
    
};