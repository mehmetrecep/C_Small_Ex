
#include <stdio.h>

int min(int, int);
int main(void) {
    int n, x, min_num;
    scanf("%d", &n);
    scanf("%d", &min_num);
    for (int i = 1; i < n; i++) {
        scanf("%d", &x);
        min_num = min(min_num, x);
    }
    printf("%d\n", min_num);
    return 0;
}

int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

/*#include <stdio.h>
int[] smallestInn(int[]);

int main(void){
    int n;
    scanf("%d",&n);
    int array[n];
    scanf("%d", array);
    int[1] min = smallestInn(array[n]);
    printf("%d\n",min);
    return 0;
}

int[] smallestInn(int array[]){
    int n = 0;
    while(array[n] != '\0'){
        n++;
    }
    int min[] = 0;
    for(int i = 0; i < n; i++){
        if(min[i]<array[i]){
            min[i] = array[i];
        }
    }
    return min;
}*/