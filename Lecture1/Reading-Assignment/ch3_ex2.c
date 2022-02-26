#include <stdio.h>  //Preprocessor Directive

int main(void){
    /* Initialize the variable i into integer (whole number)
    Initialize the variable x into float (decimal)
    */
    int i;
    float x;

    //Set the corresponding values of the variables
    i = 40; 
    x = 839.21f;

    /* Prints the output 
    The variable i is printed 4 times while the variable x is printed thrice
    Both of these repeated outputs have different formats where:
        %d ==> whole number
        %5d == > 5 characters allocated; if used on smaller digits, a space will be provided; justified to the right
        %-5d ==> the same as %5d but justified to the left
        %5.3d ==> 5 characters allocated; 3 characters are absolutely used; justified to the right
        %10.3f ==> in fixed decimal form; 10 characters allocated; 3 digits after decimal point
        %10.3e ==> in exponential form; 10 characters allocated; 3 digits after decimal point
        %-10g ==> in fixed decimal frorm or exponentional form; 10 characters allocated; justified to the left
        \n ==> new line
    */
    printf("|%d|%5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    //Since it is a void function
    return 0;
}