#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};
void readDate(struct date *);
void printDate(struct date);
int main(void){
    struct date today;
    readDate(&today);
    printDate(today);
    return 0;
}
void readDate(struct date *dt){
    scanf("%d %d %d", &(*dt).year,&(*dt).month,&(*dt).day);
};
void printDate(struct date dt){
    printf("%d/%.2d/%d",dt.month,dt.day,dt.year);
};