#include <stdio.h>                          //Input and Output Module
#include <math.h>                           

int main(void){
    //Initialize the variables
    int x;
    double y = 1.0;
    float tolerance = 0.00001;
    const char NEWLINE = '\n';
    const char TAB = '\t';

    printf("Enter x: ");                    
    scanf("%d", &x);                        //Ask user for input

    double x_over_y = x/y;                  //Formula for x/y
    double equation = (y + x_over_y)/2;     //Formula for square root of a positive number
    
    //Header
    printf("x %c y %c         x/y %c         1/2(y + (x/y)%c", TAB, TAB, TAB, NEWLINE);
    //First Content
    printf("%d %c %lf %c %lf %c %lf %c", x, TAB, y, TAB, x_over_y, TAB, equation, NEWLINE);
    
    while (fabs(equation - y) >= tolerance){
        /*Loop will end until the absolute value of (equation - y) 
        is less than equal to the value of tolerance*/

        //Perform these operations while loop is happening
        y = equation;                       //Copy the value of equation to y
        x_over_y = x/y;                     
        equation = (y + x_over_y)/2;        

        //Add Values to the Table
        printf("%d %c %lf %c %lf %c %lf %c", x, TAB, y, TAB, x_over_y, TAB, equation, NEWLINE);
    }

    //Print then square root of the given input
    printf("%cThe square root of %d is: %lf", NEWLINE, x, equation);

    return 0;
}

