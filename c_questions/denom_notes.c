/* A cashier has currency notes of denominations 10,50,100. if the amount to be withdrawn is input 
through the keyboard in hundreds,find the total number of currency notes of each denomination the 
cashier will have to give to the withdrawer */

#include <stdio.h>

int main() {
    int amount, hundred_notes, fifty_notes, ten_notes, remaining;

    printf("Enter the amount to withdraw (in hundreds): ");
    scanf("%d", &amount);

    hundred_notes = amount / 100;
    remaining = amount % 100;

    fifty_notes = remaining / 50;
    remaining = remaining % 50;

    ten_notes = remaining / 10;

    printf("Currency notes distribution:\n");
    printf("₹100 notes: %d\n", hundred_notes);
    printf("₹50 notes : %d\n", fifty_notes);
    printf("₹10 notes : %d\n", ten_notes);

    return 0;
}
