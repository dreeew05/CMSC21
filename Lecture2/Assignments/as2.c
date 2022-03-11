#include <stdio.h>

int main(void){
    //Initialize the variables
    int tens = 10;
    int num, firstDigit, lastDigit, mid, reversed;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);                                              //Prompt user for input

    lastDigit = num % tens;                                         //Get the last digit using modulo
    firstDigit = num /(tens * tens);                                //Get the first digit by division
    mid = (num % (tens * tens)) - lastDigit;                        //Get the the tens value using this formula

    reversed = firstDigit += mid += lastDigit *= tens *= tens;      //Calculate for the reversed value

    printf("%d", reversed);

    return 0;
}



