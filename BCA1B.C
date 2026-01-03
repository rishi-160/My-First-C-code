#include <stdio.h>

int main() {
    double principal, rate, balance;
    int years, i;

    // Input values
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter number of years: ");
    scanf("%d", &years);

    // Initialize balance
    balance = principal;

    // Loop for each year
    for (i = 1; i <= years; i++) {
        double interest = balance * (rate / 100.0);
        balance += interest;
        printf("Year %d: Balance = %.2lf\n", i, balance);
    }

    // Final balance
    printf("\nFinal Balance after %d years = %.2lf\n", years, balance);

    return 0;
}
