/*If a five digit number is input through the keyboard, write a program to print a new number by adding one to each of
its digits. For example if the number that is input is 12391 then the output should be displayed as 23402.*/

#include <stdio.h>

int main() {
    int num , new_number;
    int d1, d2, d3, d4, d5, new_num;
    
    printf("Enter the new number :");
    scanf("%d",&num);

    d1 = num / 10000;
    d1 = (d1 + 1) % 10;

    d2 = (num / 1000) % 10;
    d2 = (d2 + 1) % 10;

    d3 = (num / 100) % 10;
    d3 = (d3 + 1) % 10;

    d4 = (num / 10) % 10;
    d4 = (d4 + 1) % 10;

    d5 = num % 10;
    d5 = (d5 + 1) % 10;

    new_num = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;

    printf("The new number is : %d\n",new_num);
    return 0;
}