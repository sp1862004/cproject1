// Q.2 Gross Salary Calculator
// Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA to
// the base salary as chosen by the user.


#include <stdio.h>

int main() {
    float base_salary, hra, da, ta, gross_salary;

    printf("Enter the Base Salary: ");
    scanf("%f", &base_salary);

    printf("Enter HRA percentage: ");
    scanf("%f", &hra);

    printf("Enter DA percentage: ");
    scanf("%f", &da);

    printf("Enter TA percentage: ");
    scanf("%f", &ta);

    gross_salary = base_salary + (hra/100 * base_salary) + (da/100 * base_salary) + (ta/100 * base_salary);

    printf("Gross Salary: Rs. %.2f\n", gross_salary);

    return 0;
}
