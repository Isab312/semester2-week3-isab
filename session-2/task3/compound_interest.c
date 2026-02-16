
/*
 * Compute the final result of applying compound interest 
 * to a given deposit with a set interest rate and term.
 * We will assume interest is applied at the end of each year.
 */

#include <stdio.h>
#include <math.h>

int main( void ) {

    float deposit = 120.0;  // initial deposit
    float rate = 0.05;      // interest rate
    int term = 5;           // number of years
    float final_amount;
    float gain;
    

    /*
     * Implement the formula for compound interest.
     * Print out the final amount and the gain compared to the initial deposit.
#
     The compound_interest.c code is a template for calculating compound interest on an initial deposit.
        We set the interest rate and the term (number of year) with interest applied yearly.
        We can use the formula: final = deposit x ( 1 + rate )^term
        The formula for compound interest requires a power operator.
        You need to #include <math.h>
        The function is pow(x,n) that calculates x^n
        You must compile using the additional flag -lm
        gcc compound_interest.c -o compound_interest -lm
            */

    
    final_amount= deposit * pow((1+rate),term);
    gain=final_amount - deposit;
    printf("Final amount %.2f/n",final_amount);
    printf("Gain: %.2f/n", gain);
    

    return 0;
}
