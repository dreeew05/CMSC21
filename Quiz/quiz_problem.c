#include <stdio.h>
#include <math.h>

int main(void){
    int x;
    double y = 1.0;
    float tolerance = 0.00001;
    const char NEWLINE = '\n';
    const char TAB = '\t';

    printf("Enter x: ");
    scanf("%d", &x);

    double x_over_y = x/y;
    double equation = (y + x_over_y)/2;

    printf("x %c y %c         x/y %c         1/2(y + (x/y))", TAB, TAB, TAB);
    
    printf("%c", NEWLINE);
    while (fabs(equation - y) >= tolerance){
        printf("%d %c %lf %c %lf %c %lf %c", x, TAB, y, TAB, x_over_y, TAB, equation, NEWLINE);
        y = fabs(equation);
        x_over_y = x/y;
        equation = (y + x_over_y)/2;
    }

    return 0;
}