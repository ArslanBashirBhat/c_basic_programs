/*Length and breadth of a rectangle & radius of a circle are input through the keyboard. Write a program to calculate the 
area & perimeter of a rectangle, and the area & circumference of circle.*/

#include <stdio.h>
#define PI 3.14

int main()
{
    float length, breadth, radius, area_rectangle, perimeter_rectangle, area_circle, circumference_circle;

    printf("Enter length of rectangle:");
    scanf("%f", &length);

    printf("Enter breadth of rectangle:");
    scanf("%f", &breadth);

    printf("Enter radius of circle:");
    scanf("%f", &radius);

    circumference_circle = 2 * PI * radius;
    area_circle = PI * radius * radius;

    area_rectangle = length * breadth;
    perimeter_rectangle = 2 * (length + breadth);

    printf("Area and Circumference of Circle: %.2f cm², %.2f cm\n", area_circle, circumference_circle);
    printf("Area and Perimeter of Rectangle: %.2f cm², %.2f cm\n", area_rectangle, perimeter_rectangle);

    return 0;
}
