#include <stdio.h>

int main() {
    int i, j, k, l, m, n;
    for (i = 1; i <= 6; i++) {
        for (j = i; j <= (i * i); j = j + i) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
