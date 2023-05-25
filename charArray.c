#include <stdio.h>
#include <stdlib.h>


int main(void){
	int a[3] = {1,45,34};
	int m[3] = {90,2,40};
	int i[3] = {100,70,20};
	int *array[3] = {a,m,i};
	for(int i = 0; i < 3; i++){
	for(int j = 0; j < 3; j++){
		printf("%d and it's address %p \n", *(*(array+i)+j),(array+i)+j);
	}


}
	/*
		*(*array+2) = 300;
		for(int i = 0; i < 3; i++){
       		printf("%d and it's address %p\n", *((*array+i)),*array+i);
		}
	*/
printf("\n");
return 0;
}
