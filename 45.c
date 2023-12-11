#include <stdio.h>

int main() {
    int myArray[7] = {-99, 45, 100, 37, 89, -327, 245};
    int i, max = 0;
    for (i = 0; i < 7; i++) {
        if (myArray[i] > max) {
            max = myArray[i];
        }
    }
    printf("%d", max);

    return 0;
}
