#include <stdio.h>

int main(void){
    int membersNumber;
    int totalWeight;
    int sumOfTeam_1 = 0;
    int sumOfTeam_2 = 0;
    scanf("%d",&membersNumber);
    for(int i = 0; i < membersNumber*2; i++){
        scanf("%d",&totalWeight);
        if(i%2==0){
            sumOfTeam_1 += totalWeight; 
        }else{
            sumOfTeam_2 += totalWeight;
        }
    }
    if(sumOfTeam_1>sumOfTeam_2){
        printf("Team 1 has an advantage\n");
        printf("Total weight for team 1: %d\n",sumOfTeam_1);
        printf("Total weight for team 2: %d\n",sumOfTeam_2);
    }else{
        printf("Team 2 has an advantage\n");
        printf("Total weight for team 1: %d\n",sumOfTeam_1);
        printf("Total weight for team 2: %d\n",sumOfTeam_2);
    }
    return 0;
}