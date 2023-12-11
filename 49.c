#include <stdio.h>

int main() {
    int myArray[3][3];
    int i, j, sum = 0;
    float avg;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &myArray[i][j]);
            sum = sum + myArray[i][j];
        }
    }

    avg = sum / 9;
    printf("%.2f\n", avg);

    return 0;
}
