#include <stdio.h>

int elixir(int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);
	age = elixir(&age);
	printf("Your new age will be %d!\n", age);
	return 0;
}

int elixir(int * ageAddr){
    int age;
    if(*ageAddr >= 21){
        age = *ageAddr - 10;
    }else{
        age = *ageAddr * 2;
    }
    return age;
}