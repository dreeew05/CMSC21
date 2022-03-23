#include <stdio.h>
#include <math.h>                                                       

int main (void) {
    const char NEWLINE = '\n';  
    const char TAB = '\t';
    int new_num;
    printf("TABLE OF POWERS OF TWO %c%c", NEWLINE, NEWLINE);
    printf("n  %c  2 to the n %c", TAB, NEWLINE);
    printf("--- %c  ---------- %c", TAB, NEWLINE);

    for (int i = 0; i < 11; i++){
        new_num = pow(2, i);                                            //pow() computes the exponent value for each value of i
        printf("%d %c  %d %c", i, TAB, new_num, NEWLINE);
    }

    return 0;
}


