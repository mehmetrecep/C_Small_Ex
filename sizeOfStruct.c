#include <stdio.h>

struct student{
    char firstName[30];
    char secondeName[30];
    int age;
};
int main(void){
    struct student st;
    char *ptr = (char *)&st.firstName;
    struct student *std = &st;
    printf("The size of struct is : %zu\n",sizeof(struct student));
    printf("The size of struct first name is : %zu\n",sizeof(st.firstName));
    printf("The address of struct %p\n",std);
    printf("The address of struct student %p\n",(void*)ptr);
    printf("The size of struct second name is : %zu\n",sizeof(st.secondeName));
    printf("The size of struct age is : %zu\n",sizeof(st.age));
    return 0;
}