#include <stdio.h>  //Preprocessor Directive

int main(void){
    //Initialize the variables to integers
    int num1, denom1, num2, denom2, result_num, result_denom;

    //Asks for the first fraction with variables num1 and denom1 in use
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    //Asks for the second fraction with variables num2 and denom2 in use
    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    /* Calculate the sum of the fraction 
    When calculating for the numerator, use the formula for result_num
    When calculating for the denominator, use the formula for result_denom 
    */
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    //Print the final fraction
    printf("The sum is %d/%d\n", result_num, result_denom);

    //Since it is a void function
    return 0;
}