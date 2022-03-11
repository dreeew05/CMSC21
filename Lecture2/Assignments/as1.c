#include <stdio.h>

int main(void){
    //Initialize the variables
    int tens = 10;
    int num, firstDigit, lastDigit, reversed;

    printf("Enter a two-digit number: ");                 
    scanf("%d", &num);                                  //Prompt user for input

    lastDigit = num % tens;                             //Get the last digit using modulo
    firstDigit = num / tens;                            //Get the first digit using division

    reversed = firstDigit += lastDigit *= tens;         //Calculate for the reversed value

    printf("%d", reversed);

    return 0;
}

