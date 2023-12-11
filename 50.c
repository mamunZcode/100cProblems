#include <stdio.h>

int main() {
    int myArray[3][3];
    int i, j, sum = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &myArray[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                sum = sum + myArray[i][j];
            }
        }
    }
    printf("\n%d\n", sum);


    return 0;
}
