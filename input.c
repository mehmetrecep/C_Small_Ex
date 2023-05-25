#include <stdio.h>
#include <stdlib.h>

struct student{
	char first_Name[30];
	char second_Name[30];
	int id;
};

int main(void){
	struct student st;
scanf("%s %s %d", st.first_Name, st.second_Name, &st.id);	
printf("%s and the addreaa of it is %p\n", st.first_Name,&st.first_Name);
printf("%s and the addrss of it is %p\n", st.second_Name,&st.second_Name);
printf("%d and the address of it is %p", st.id, &st.id);
return 0;

}
