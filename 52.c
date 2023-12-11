#include <stdio.h>

int main() {
    float A[5];
    float B[5];
    int i;
    float avg_A, avg_B, sum_A = 0, sum_B = 0;

    for (i = 0; i < 5; i++) {
        scanf("%f", &A[i]);
        sum_A = sum_A + A[i];
    }
    avg_A = sum_A / 5;
    printf("\n\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &B[i]);
        sum_B = sum_B + B[i];
    }
    avg_B = sum_B / 5;
    printf("\n\n");

    if (avg_A > avg_B) {
        printf("Avg: %.2f -> A\n", avg_A);
    } else {
        printf("Avg: %.2f -> B\n", avg_B);
    }

    return 0;
}
