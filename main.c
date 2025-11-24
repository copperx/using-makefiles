#include <stdio.h>
#include "arith_utils.h"

int main(void) {
    float x, y;

    // TODO: prompt user for two floats
    printf("Enter first number: ");
    scanf("%f", &x);

    printf("Enter second number: ");
    scanf("%f", &y);

    printf("\nResults:\n");
    printf("%.2f + %.2f = %.2f\n", x, y, add(x, y));
    printf("%.2f - %.2f = %.2f\n", x, y, subtract(x, y));
    printf("%.2f * %.2f = %.2f\n", x, y, multiply(x, y));

    if (y == 0.0f) {
        printf("%.2f / %.2f = undefined (division by zero)\n", x, y);
    } else {
        printf("%.2f / %.2f = %.2f\n", x, y, divide(x, y));
    }

    return 0;
}
