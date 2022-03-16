#include <stdio.h>
#include <stdbool.h>

int main (void){
    /*Declare the variables*/
    int age;
    bool teenager = false;
    
    printf("Enter Age: ");
    scanf("%d", &age);                      //Prompt user for input

    /*Optimized code*/
    if(age >= 13 && age <= 19){
        teenager = true;
    }

    printf("%d", teenager);
    return 0;
}


