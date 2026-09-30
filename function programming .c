/*
name:JOSEPH MUIGA WACHIRA
reg no: CT100/G/30672/26
Date : 30th september 2026
Description: c function on number of units consumed
*/

#include <stdio.h>

// Function prototype
float calculateBill(float unit);

// Main function
int main() {
    float unit, Bill;

    printf("Enter units consumed: ");
    scanf("%f", &unit);

    // Function call
    Bill = calculateBill(unit);

    printf("Bill is Ksh %.2f\n", Bill);
    printf("Units consumed: %.2f\n", unit);

    return 0;
}

// Function definition
float calculateBill(float unit) {
    float Bill;

    if (unit <= 100) {
        Bill = unit * 10;
    }
    else if (unit <= 200) {
        Bill = (10 * 100) + (15 * (unit - 100));
    }
    else {
        Bill = (10 * 100) + (15 * 100) + (20 * (unit - 200));
    }

    return Bill;
}