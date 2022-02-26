#include <stdio.h>  //Preprocessor Directive

int main(void){
    //Variables i and j are set to integers
    int i, j;
    //Variables x and y are set to float
    float x, y;

    //Set the values of the variables
    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    /*Print the corresponding variables with their values
    Take note that: %d ==> whole number (no decimal places)
                    %f ==> decimal form (5 decimal places)
                    \n ==> new line
    */
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

    //Since it is a void function
    return 0;
}