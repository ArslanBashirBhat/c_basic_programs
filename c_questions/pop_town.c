/*In a town the percentage of men is 52, the percentage of total literacy is 48. if the total percentage of literate men is 
35% of total population, write a program to find the total number of illeterate men and women if the population of the town is 80,000.*/

#include <stdio.h>
#define total_pop 80000

int main() {

    float men, women, ill_men, ill_women ;
    
    men = 80000 * (52.0/100); //number of menm in town 
    women = total_pop - men; //number of women in town 

    ill_men = men - (80000 * 35.0/100);
    ill_women = 80000 * (48.0/100) - (80000 * 13.0/100);

    printf("Total illeterate men are :%.0f\n",ill_men);
    printf("Total illeterate women are :%.0f\n",ill_women);

    return 0;
    
}