#include <stdio.h>

int main(void){
    const char NEWLINE = '\n'; 
    const char TAB = '\t';
    const char EMPTY = ' ';
    int days, start;
    int space = 1;                                                          //Provide spaces when day is not used.
    int day = 1;                                                            //Starting day

    printf("Enter number of days in month: ");
    scanf("%d", &days);                                                     //Prompt user for number of days.
    printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);                                                    //Prompt user what day is the starting day.

    if((days < 28 || days > 31) || (start < 1 || start > 7)){
        /*Judges if user inputted an illegal value.
        If the value is illegal, it will display a warning, 
        Otherwise, the program will yield the appropriate calendar. */
        printf("Invalid input");
    }
    else{
        while (day <= days){  
            /*The loop will continue until day is less than the desired number of days. */                            
            for (int i = 0; i < 7; i++){
                /* This will print the days inside the week */
                if (space < start){
                    /* Check if the day in the first week is the starting day.
                    If it is not, print an empty space,
                    Otherwise print the corresponding date. */
                    printf("%c%c", EMPTY, TAB);
                    space++;
                }
                else{
                    if (day > days){
                        /*Check if the value of day overflows the number of days.
                        If the day is over, it will print an empty space. */
                        printf("%c%c", EMPTY, TAB);
                    }
                    else{
                        printf("%d%c", day, TAB);
                    }
                    day++;
                }
            }
            printf("%c", NEWLINE);
        }
    }

    return 0;
}