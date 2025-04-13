/* Ramesh's basic salary is Input though the keyboard.His dearness allowance is 40% of basic salary, 
and house rent allowance is 20% of basic salary. write a program to calculate his gross salary.*/
#include <stdio.h>

int main() 
{
    float base_salary, dearness_allowance, house_rent_allowance, gross_salary;

    printf("Enter your Base Salary :");
    scanf("%f",&base_salary);

//dearness allowance 
    dearness_allowance = base_salary * 40/100;

//house rent allowance 
    house_rent_allowance = base_salary * 20/100;

//gross salary
    gross_salary = base_salary + dearness_allowance + house_rent_allowance;

    printf("Your Gross Salary on monthly basis is : %.2f₹ \n",gross_salary);
    return 0;

}