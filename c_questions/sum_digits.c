/*If a five digit number is input through the keyboard, write a program to calculate the sum of its digits.*/

#include <stdio.h>

int main() 
{
    int number, sum_of_digits;

    printf("Enter five digit number :");
    scanf("%d",&number);

    sum_of_digits = 0;

    sum_of_digits += number % 10;
    number /= 10;

    sum_of_digits += number % 10;
    number /= 10;

    sum_of_digits += number % 10;
    number /= 10;

    sum_of_digits += number % 10;
    number /= 10;

    sum_of_digits += number % 10;
    number /= 10;

    printf("Sum of Five digit number is :%d\n",sum_of_digits);
   return 0;
}