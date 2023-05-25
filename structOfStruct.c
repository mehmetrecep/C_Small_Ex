#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char first_Name[30];
    char second_Name[30];
    int id;
    struct student *next;
};

void printPoints(struct student *start);
struct point * append(struct student *, struct student *);
struct point creatPoint(int,int);
void freePointer(struct student *start);

int main(int argc, char **argv){
    
    int num_Of_Struct;
    printf("Enter the number of struct: ");
    scanf("%d",&num_Of_Struct);
    struct student *st_1;
    st_1 =  (struct student*)malloc(sizeof(struct student));
    struct student *st_2;
    st_2 =  (struct student*)malloc(sizeof(struct student));
    struct student *st_3;
    st_3 =  (struct student*)malloc(sizeof(struct student));
    struct student *prt_4 =  (struct student*)malloc(sizeof(struct student));

    struct student *structArray[num_Of_Struct];
    for(int i = 0; i < num_Of_Struct; i++){
        structArray[i] = (struct student *)malloc(sizeof(struct student)*3);
    }    
   
    *st_1 = (struct student){"SalahEldin","Ragab",1234};
    *st_2 = (struct student){"Mariam", "Ragab", 5678};
    *st_3 = (struct student){"Zahra", "Ragab", 9012};
    structArray[0] = st_1;
    structArray[1] = st_2;
    structArray[2] = st_3;
    for(int i = 0; i < num_Of_Struct; i ++){
        scanf("%s %s %d", 
                structArray[i]->first_Name, 
                structArray[i]->second_Name, 
                &structArray[i]->id);
    }
    printf("%p %s %p\n", st_1->first_Name, st_1->first_Name, &st_1->id);
    printf("%p \n", st_1->second_Name);
    printf("%p %s\n", st_2, st_2->first_Name);
    printf("%p %s\n", st_3, st_3->first_Name);
    
    for(int i = 0; i < 3; i++){
        printf("%p %s %d\n", structArray[i], structArray[i]->first_Name, structArray[i]->id);
    }
    free(st_1);
    free(st_2);
    free(st_3);
    

    
    return 0;
}
void printPoints(struct student *start){
    struct student  *prt;
    prt = start;
    while(prt != NULL){
        printf("%s ", prt->first_Name);
        printf("%p \n",prt);
        prt = prt->next;
    }

}
