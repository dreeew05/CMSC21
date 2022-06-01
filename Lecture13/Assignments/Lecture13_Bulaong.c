#include <stdio.h>
#include <math.h>

struct line{
    struct point{
        float x;
        float y;
    }point1, point2;
    float *midpoint;
    float slope;
    float distance;
};

//Function Prototypes
float solveSlope(struct line line1);
float solveDistance(struct line line1);
float *solveMidpoint(struct line line1);
void getSlopeInterceptForm(struct line line1);

int main(){
    const char NEWLINE = '\n';
    struct line line1;                                                                  //Declare the variable of the structure

    printf("Enter x and y for point 1: ");
    scanf("%f %f", &line1.point1.x, &line1.point1.y);                                   //Get the values of x and y for point1
    printf("Enter x and y for point 2: ");
    scanf("%f %f", &line1.point2.x, &line1.point2.y);                                   //Get the values of x and y for point2
    
    //Solve Slope
    line1.slope = solveSlope(line1);                                                    //Store the returned value of solveSlope() into the variable slope from the structure
    line1.distance = solveDistance(line1);                                              //Store the returned value of solveDistance() into the variable distance from the structure
    line1.midpoint = solveMidpoint(line1);                                              //Store the returned value of solveMidpoint() into the variable midpoint from the structure. This contains an array that can be accessed through pointers

    printf("Slope: %.6f%c", line1.slope, NEWLINE);
    printf("Midpoint: ");
    for(int i = 0; i < 2; i++){
        /* Using pointers we can print the values of the array from the function*/
        printf("%.6f ", *line1.midpoint + i);
    }
    printf("%c", NEWLINE);
    printf("Distance between two points: %f%c", line1.distance, NEWLINE);
    getSlopeInterceptForm(line1);                                                       //This is a void function, so nothing will be returned
    return 0;
}

float solveSlope(struct line line1){
    //Returns the value of the slope ==> (y2 - y1)/(x2 - x1)
    return ((line1.point2.y - line1.point1.y) / (line1.point2.x - line1.point1.x));
}
float *solveMidpoint(struct line line1){                                                //There is a pointer operator in the function name that indicates that a pointer is returned by the function
    static float m_arr[2];                                                              //We are returning this array, so we need to initialize it as static.
    //Solve for Midpoint x
    m_arr[0] = ((line1.point1.x + line1.point2.x)/2);
    //Solve for Midpoint y
    m_arr[1] = ((line1.point1.y + line1.point2.y)/2);
    return m_arr;
}
float solveDistance(struct line line1){
    /*I split the formula to have a more understandable code.
    The variable x_plus_y is (x1 - x2)^2 + (y1 - y2)^2
    The returned value is the square root of the formula above*/
    float x_plus_y = pow((line1.point1.x - line1.point2.x), 2) + pow((line1.point1.y - line1.point2.y), 2);
    return sqrt(x_plus_y);
}
void getSlopeInterceptForm(struct line line1){
    //Solve for b in y = mx + b
    float b;
    b = line1.point1.y - (line1.slope * line1.point1.x);                                //Formula for b; y = mx + b ==> b = y - mx
    //Slope Intercept Form
    printf("y = %.6fx + (%.6f)", line1.slope, b);
}