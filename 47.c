#include <stdio.h>

int main() {
    int myArray[5];
    int i, count = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &myArray[i]);
        if (myArray[i] > 100)
            count++;
    }
    printf("\n%d\n", count);

    return 0;
}
