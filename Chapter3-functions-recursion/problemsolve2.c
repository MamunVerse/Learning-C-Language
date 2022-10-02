/*
Problem 2 : Write functions to calculate area of square, a circle & a rectangle.
*/

# include <stdio.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a, float b);

int main(){

    float side = 20;
    float radius = 14;
    float a = 5.0;
    float b = 10.0;

    printf("Square Area is : %f \n", squareArea(side));
    printf("Circle Area is : %f \n", circleArea(radius));
    printf("Rectangle Area is : %f \n", rectangleArea(a, b));
    
    return 0;
}

float squareArea(float side){
    return side * side;
}
float circleArea(float radius){
    return 3.1416 * radius * radius;
}
float rectangleArea(float a, float b){
    return a*b;
}


