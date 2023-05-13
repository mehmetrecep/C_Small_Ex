#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

void readDate(struct date *dt){
    scanf("%d %d %d", &(*dt).year,&(*dt).month,&(*dt).day);
};
void printDate(struct date dt){
    printf("%.2d/%.2d/%d\n",dt.month,dt.day,dt.year);
};
struct date advanceDay(struct date dt){
    if(dt.day != 31 && dt.day != 30 && (dt.day != 28 && dt.month == 2) && dt.month > 12){
        dt.day++;
    }else{
        if(dt.month==12 && dt.day == 31){
            dt.day = 1;
            dt.month = 1;
            dt.year++;
        }else
        {
            dt.day = 1;
            dt.month++;
        }
    }
    return dt;
    /*
    dt.day++;
    if (dt.day > 31) {
        dt.day = 1;
        dt.month++;
        if (dt.month > 12) {
            dt.month = 1;
            dt.year++;
        }
    }
    return dt;
    */
}; 
