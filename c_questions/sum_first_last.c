/*If a four digit number is input through the keyboard,
 write a program to obtain the sum of first and last digit of this number.*/

#include <stdio.h>

int main() 
{
    int number, sum;

    printf("Enter four digit number :");
    scanf("%d",&number);

    sum = 0;

    sum += number % 10;
    number /= 1000;

    sum += number % 10;

    printf("Sum of First and Last digit : %d\n", sum);
    return 0;
}