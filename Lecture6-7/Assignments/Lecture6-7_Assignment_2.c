#include <stdio.h>
#include <stdbool.h>

#define X_axis 8
#define Y_axis 8

int main (void){

    const char NEWLINE = '\n';
    const char TAB = '\t';
    
    //Initialize the 2d array
    bool roadNet[X_axis][Y_axis] = {
        {1,1,0,0,0,1,0,0},
        {1,1,1,0,0,0,0,0},
        {0,1,1,0,1,1,0,0},
        {0,0,0,1,1,0,0,0},
        {0,0,0,1,1,0,0,0},
        {1,0,1,0,0,1,0,0},
        {1,0,0,1,0,0,1,0},
        {0,0,0,0,0,1,0,1}
    };

    //Array for checking if the node has already been visited
    bool checker[Y_axis] = {0,0,0,0,0,0,0,0};

    //Array for legends
    char* legend[X_axis] = {"A", "B", "[C]", "[D]", "E", "F", "G", "H"};
    char* alt_legend[X_axis] = {"A", "B", "C", "D", "E", "F", "G", "H"};

    bool stop = false;                                              //Variable that determines if loop will end or not
    int point;                                                      //Variable that will be used to traverse the first level of the array

    //Print the Road Network Table
    for(int i = 0; i < X_axis + 1; i++){
        for(int j = 0; j < Y_axis + 1; j++){
            if(i == 0 && j == 0){
                //Empty Space
                printf("%c", TAB);
            }
            else if(i == 0 && j > 0){
                //Print x-axis legend
                printf("%s%c", legend[j-1], TAB);
            }
            else if(j == 0 && i > 0){
                //Print y_axis legend
                printf("%s%c", legend[i-1], TAB);
            }
            else{
                //Print the Road Network main components
                printf("%d%c", roadNet[i-1][j-1], TAB);
            }
        }
        printf("%c", NEWLINE);
    }

    printf("Which point are you located?: ");
    scanf("%d", &point);                                                                            //Ask user for input                                                                             
    if(point < 0 || point > 8){
        //Checks if input is invalid or not
        printf("Invalid Input!");
    }
    else if(point == 2 || point == 3){
        //Checks if input is already a charging station
        printf("point: %s is a charging station", alt_legend[point]);
    }
    else{
        /*Check if input is valid and not a charging station.
        Then, traverse the whole array until charging station is found*/
        printf("At point: %s%c", alt_legend[point], NEWLINE);
        while(stop == false){
            //While loop will only stop if charging station is already visited
            for(int i = 0; i < X_axis; i++){
                if(point == 2 || point == 3){
                    /*Check if the point is already a charging station.
                    If it is, break the loop and end the program*/
                    printf("point: %s arrived at charging station", alt_legend[point]);
                    stop = true;
                    break;
                }
                else{
                    if(roadNet[point][i] == 1 && checker[i] == 0){
                        /*For loop will iterate until it founds the first point that contains "1",
                        If that point is already visited, then move to the next unvisited node.
                        That point will become the new value of the variable point,
                        and mark the index of it in the checker array, signifying that it is already visited*/
                        printf("Now at point %s%c", alt_legend[i], NEWLINE);
                        point = i;
                        checker[i] = 1;
                    }
                }
            }
        }
    }

    return 0;
}