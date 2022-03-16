#include <stdio.h>

int main(void){
    int num, fNum, sNum;                                                //Declare the variables

    printf("Enter a two-digit number: ");
    scanf("%d", &num);                                                  //Prompt user for input

    if(num/10 >= 1 && num/10 <= 9){
        /*Determine the number if number is two-digit*/
        printf("Number entered in words: ");

        if(num >= 10 && num <= 19){                                     //Special case for 10 - 19                                   
            switch(num){
                case 10: printf("ten"); break;
                case 11: printf("eleven"); break;
                case 12: printf("twelve"); break;
                case 13: printf("thirteen"); break;
                case 14: printf("fourteen"); break;
                case 15: printf("fifteen"); break;
                case 16: printf("sixteen"); break;
                case 17: printf("seventeen"); break;
                case 18: printf("eigtheen"); break;
                case 19: printf("nineteen"); break;
            }
        }
        else{
            /*Break the number into two digits*/
            fNum = num/10;                                              //Divide the number by 10 to get the first digit
            sNum = num%10;                                              //Get the remainder of the number to get the second digit

            switch(fNum){
                case 2: printf("twenty"); break;
                case 3: printf("thirty"); break;
                case 4: printf("forty"); break;
                case 5: printf("fifty"); break;
                case 6: printf("sixty"); break;
                case 7: printf("seventy"); break;
                case 8: printf("eighty"); break;
                case 9: printf("ninety"); break;
            }

            switch(sNum){
                case 1: printf("-one"); break;
                case 2: printf("-two"); break;
                case 3: printf("-three"); break;
                case 4: printf("-four"); break;
                case 5: printf("-five"); break;
                case 6: printf("-six"); break;
                case 7: printf("-seven"); break;
                case 8: printf("-eight"); break;
                case 9: printf("-nine"); break;
            }
        }
    }
    else{
        printf("Number is not two-digit!");
    }

    return 0;
}