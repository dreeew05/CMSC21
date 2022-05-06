#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway) / sizeof(pathway[0])))

int main(){
    /** Original Initialization
    bool pathway[8] = {true, false, true, false, false, false, false, false};
    **/
    /** Designated Initializer
    bool pathway[8] = {[0] = true, [2] = true};
    **/
    //Initializing Without Declaring the Size
    bool pathway[] = {true, false, true, false, false, false, false, false};

    for(int  i = 0; i < NUM_PATHWAYS; i++){
        if(pathway[i]){
            printf("pathway[%d] is open \n", i);
        }
        else{
            printf("pathway[%d] is close \n", i);
        }
    }

    return 0;
}