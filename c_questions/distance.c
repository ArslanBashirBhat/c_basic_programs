/*The distance between two cities (in km) is input through the keyboard.
 write a program to convert and print this distance in meters,feet,inches, and centimeters.*/

#include <stdio.h>

int main() 
{
    float distance, distance_meters, distance_centimeters, distance_inches, distance_feet ;
    printf("Enter the distance between the two cities in kms :");
    scanf("%f",&distance);

//distance in meters 
    distance_meters = distance  * 1000 ;
    
//distance in centimeters
    distance_centimeters = distance * 100000 ;

//distance in inches
    distance_inches = distance * 39370.1 ;

//distance in feet
    distance_feet = distance * 3280.84 ;


    printf("Distance in Km's : %.2f kms\n",distance);

    printf("Distance in Meters : %.2f meters\n",distance_meters);

    printf("Distance in Centimeters : %.2f cms\n",distance_centimeters);

    printf("Distance in Inches : %.2f inches\n",distance_inches);

    printf("Distance in Feet : %.2f feet\n",distance_feet);

    return 0;
}
