#include <stdio.h>

/*
 * Portfolio submission
 * Name: Isa Bajibhai
 * ID: qggg0310
 */

int main(void) {

   
    float salary = 36250.0;
    float ni_rate = 0.08;     // 8%
    float tax_rate = 0.15;    // 15%
    float tax_free_allowance = 12500.0;

    /* National insaurance calculation  */
    float ni_contribution = salary * ni_rate;
    float salary_after_ni = salary - ni_contribution;

    /* Tax calculations only if it is above 12.5k */
    float taxable_amount = 0.0;
    if (salary_after_ni > tax_free_allowance) {
        taxable_amount = salary_after_ni - tax_free_allowance;
    }

    float tax_contribution = taxable_amount * tax_rate;

    /* Final salary */
    float take_home_salary = salary_after_ni - tax_contribution;

    /* Required output */
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni_contribution);
    printf("Tax contribution £%.2f\n", tax_contribution);
    printf("Take home salary £%.2f\n", take_home_salary);

    return 0;
}
