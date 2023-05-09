#include <stdio.h>

double ConvertingtoFeets(double);
double Convertingtopound(double);
double ConvertingtoFeh(double);

int main(void){
    int n;
    char unit;
    double value; 
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%lf %c",&value, &unit);
        if(unit == 'm'){
            printf("%.6f ft\n",ConvertingtoFeets(value));
        }else if(unit == 'g'){
            printf("%.6f lbs\n",Convertingtopound(value));
        }else if(unit == 'c'){
            printf("%.6f f\n",ConvertingtoFeh(value));
        }
    }
    return 0;
}

double ConvertingtoFeets(double meter){
    double converted = meter * 3.2808;
    return converted;
}

double Convertingtopound(double gram){
    double convertedGram = gram * 0.002205;
    return convertedGram;
}
double ConvertingtoFeh(double degree){
    double convertedDegree = 32 + (1.8 * degree);
    return convertedDegree;
}