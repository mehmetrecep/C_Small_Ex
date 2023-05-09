#include <stdio.h>

int main(void){
    int list[] = {-10,-3,2,3,5,14,77,106,759,999};
    int n = 10;
    int item;
    int low, high, mid, found;
    printf("Which number are you looking for? ");
    scanf("%d", &item);
    low = 0;
    high = n - 1;
    found = 0;

    while(!found && (low <= high)){
        mid = (low + high) / 2;
        if(item == list[mid]){
            found = 1;
        }else if(item < list[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
        }

    if(!found){
        printf("Number %d was not found in array.\n", item);
    }else{
        printf("Number %d found at index %d .\n", item, mid);
    }
}