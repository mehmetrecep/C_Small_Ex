#include <stdio.h>

int main() {
    int min_temp, max_temp, temp;

    // read the min and max safe temperatures
    scanf("%d %d", &min_temp, &max_temp);

    // continuously read temperatures until -999 is received
    while (1) {
        scanf("%d", &temp);
        if (temp == -999) break;  // stop reading temperatures

        // check if the temperature is in the safe range
        if (temp < min_temp || temp > max_temp) {
            printf("Alert!\n");
            break;  // stop reading temperatures
        } else {
            printf("Nothing to report\n");
        }
    }

    return 0;
}


/*
#include <stdio.h>

int main(void){
    int minValue;
    int maxValue;
    scanf("%d",&minValue);
    scanf("%d",&maxValue);
    int temperature;
    while(temperature != -999){
        scanf("%d",&temperature);
        if(temperature >= minValue && temperature <= maxValue){
            printf("Nothing to report\n");
        }else{
            printf("Alert!\n");
            break;
        }
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main(void){
    int minValue;
    int maxValue;
    int temperature;
    scanf("%d",&minValue);
    scanf("%d",&maxValue);
    while(temperature != -999){
        scanf("%d",&temperature);
        if(temperature >= minValue && temperature <= maxValue){
            printf("Nothing to report\n");
        }else{
            if(temperature <= minValue && temperature >= maxValue){
                printf("Alert!\n");
                break;
            }else if(!temperature >= minValue && !temperature <= maxValue){
                printf("Alert!\n");
                break;
            }else if (!temperature <= minValue){
                 printf("Alert!\n");
                break;
            }else if{
                break;
            }
           
        }
    }
    return 0;
}
*/