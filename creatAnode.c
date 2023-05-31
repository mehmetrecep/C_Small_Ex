#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int age;
    struct student *next;
};
struct student *createStudent(char studentName[], int studentAge);
int main(void){
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}
struct student *createStudent(char studentName[], int studentAge){
    struct student *st;
    st = (struct student *)malloc(sizeof(struct student));
    for(int i = 0; i < 10; i++){
        //while(studentName[i] != '\0'){
             st->name[i] = studentName[i];
        
    }
    st->age = studentAge;
    st->next = NULL;
    return st;
};
/*
    #include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int age;
    struct student *next;
};
struct student *createStudent(char studentName[], int studentAge);
int main(void){
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}
struct student *createStudent(char studentName[], int studentAge){
    struct student *st;
    
    st = (struct student *)malloc(sizeof(struct student));
    /*
    for(int i = 0; i < 10; i++){
        //while(studentName[i] != '\0'){
             st->name[i] = studentName[i];
        
    }
    st->age = studentAge;
    st->next = NULL;
    return st;
     if (st == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    int i = 0;
    for(i = 0; i < 49; i++){
        st->name[i] = studentName[i];
    }
    st->name[i] = '\0';
    st->age = studentAge;
    st->next = NULL;

    return st;
};
*/
// ANOTHER SOLUTION FOR THE QUESTION
/*
#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);

// Write other function prototypes here (if any)

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

// Write your createStudent function here (and any other functions you see fit)
struct student *createStudent(char studentName[], int studentAge){
    struct student* newStudent = (struct student*)malloc(sizeof(struct student));
    if (newStudent == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    int i = 0;
    while (studentName[i] != '\0' && i < 49) {
        newStudent->name[i] = studentName[i];
        i++;
    }
    newStudent->name[i] = '\0';
    newStudent->age = studentAge;
    newStudent->next = NULL;

    return newStudent;
}
*/