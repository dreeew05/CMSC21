#include <stdio.h>

int main (void){
    const char NEWLINE = '\n';  
    int i;

    //A
    i = 11;
    while (i < 10){
        printf("%d ", i);
        i++;
    }
    printf("%c", NEWLINE);

    //B
    for (i = 11; i < 10; i++){
        printf("%d ", i);
    }
    printf("%c", NEWLINE);

    //C
    i = 11 ;
    do {
        printf("%d ", i);
        i++;
    }
    while(i < 10);

    return 0;
}

