#include <stdio.h>

int main(void) {

    int age;
    // add a line here that declares an integer pointer named "ageptr"
    int *ageptr = &age;
    scanf("%d", &age);
    //*ageptr = &age;
    // add a line here that stores the address of age in ageptr  

    printf("The secret address is... ");
    printf("%p\n",ageptr);

    // add a line here that prints out the address stored in ageptr  

    printf("Now take three drops of the magic elixir. \n");

    // add a line that uses only ageptr to lower the age by 5 years
    *ageptr -= 5;

    printf("Did the elixir work? You are %d years old!\n", age);

    return 0;

}