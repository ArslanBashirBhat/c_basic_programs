/*two numbers are input through the keyboard into two locations C and D. write a program to 
interchange the contents of C and D.*/

#include <stdio.h>

int main() 
{
    int num1, num2, cup;

    printf("Enter number :");
    scanf("%d",&num1);

    printf("Enter another number :");
    scanf("%d",&num2);

    cup = num1;
    num1 = num2;
    num2 = cup;

    printf("Swapped numbers :\n%d\n%d\n",num1,num2);
    return 0;
}