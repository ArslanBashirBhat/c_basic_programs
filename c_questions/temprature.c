/* Temprature of a city in Farenheit degrees is input through the keyboard. 
Write a program to convert this temprature into centigrade degrees.*/

#include <stdio.h>

 int main() 
 {
    float fahrenheit, celsius ;

    printf("Enter the temprature of your city in Fahrenheit :");
    scanf("%f",&fahrenheit);

//conversion 
    celsius = 5.0/9.0 * (fahrenheit - 32);

    printf("Temprature in your city in Degree Celcius : %.2f°C\n",celsius);
    
    return 0;
 }