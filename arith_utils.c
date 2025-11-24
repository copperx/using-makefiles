#include "arith_utils.h"

// Implement each function

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0.0f) {
        return 0.0f;   // avoid divide-by-zero
    }
    return a / b;
}
