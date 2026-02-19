#include <stdio.h>

int main() {
    int start, end, units;
    float bill;

    // Input
    printf("Enter starting meter reading: ");
    scanf("%d", &start);

    printf("Enter ending meter reading: ");
    scanf("%d", &end);

    units = end - start;

    if (units <= 0) {
        printf("Invalid readings.\n");
        return 1;
    }

    // Calculate bill
    if (units <= 200) {
        bill = units * 5.50;
    } else if (units <= 400) {
        bill = 700 + (units - 200) * 6.0;
    } else if (units <= 600) {
        bill = 1400 + (units - 400) * 7.5;
    } else {
        bill = 1850 + (units - 600) * 9.0;
    }

    // Output
    printf("Units consumed: %d\n", units);
    printf("Energy bill: Rs. %.2f\n", bill);

    return 0;
}