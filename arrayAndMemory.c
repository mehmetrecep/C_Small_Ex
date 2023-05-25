#include <stdio.h>

int main(void) {

    double totalWet, totalDry, ratio;

    double wet[2];
    double dry[3];
    double * cookie[2] = {wet,dry};
    
    scanf("%lf%lf", &wet[0], &wet[1]);
    scanf("%lf%lf%lf", &dry[0], &dry[1], &dry[2]);
    
    totalWet = 0;
    for(int t = 0; t < 2; t++){
        totalWet += *(*cookie+t);
    }

    printf("Total amount of wet ingredients: %.2lf grams.\n", totalWet);
    
    // Add one line here! 
    /* The line you add should use the array cookie (and not the array dry) to 
       find the sum of the dry ingredients of the cookie recipe and store that sum
       in the variable totalDry. This time, use only one pair of brackets [..] each 
       time you address the cookie array. 
    */
    totalDry = 0;
    for(int i = 0; i < 3; i++){
        totalDry += *(*(cookie+1)+i);
    }
        

    printf("Total amount of dry ingredients: %.2lf grams.\n", totalDry);
    ratio = totalDry/totalWet;
    printf("Ratio of wet to dry ingredients: %.2lf.\n", ratio);

    // Add two lines here.
    /* The lines you add should use the array cookie (and not the array wet) to
       update the amounts of water and oil in your recipe. 
       You believe that any cookie recipe should use equal amounts of water and oil.
       Without changing the total amount of wet ingredients, update the values for
       water and oil, using only the array cookie (and not the array wet) so that 
       these amounts will be equal. The easiest way to do so is to assign the value
       totalWet/2 to both the water and the oil entry. When addressing the array cookie,
       do not use any brackets at all this time.
    */
   for(int j = 0; j < 2; j++){
        *(wet+j) = totalWet / 2;
   }
    
    printf("New water amount: %.2lf grams, new oil amount: %.2lf grams.\n", wet[0], wet[1]);
    
    return 0;
}