/*If the total selling price of 15 items and the total profit earned on them is input through the keyboard,
write a program to find the cost price of one item.*/

#include <stdio.h>

int main() {
    float cost_price,profit,selling_price,cost_per_item;

    printf("Enter the total selling price :");
    scanf("%f",&selling_price);

    printf("Enter the total Profit :");
    scanf("%f",&profit);

    cost_price = selling_price - profit;
    cost_per_item = cost_price/15;

    printf("Cost of each item is :%.2f",cost_per_item);
    return 0;
}
