#include<stdio.h>

void divisor(int value) {
    int i;
    for (i = 1; i <= value; i++) {
        if (value % i == 0)
            printf("%d ", i);
    }
}

int main() {
    int number;
    scanf("%d", &number);
    divisor(number);

    return 0;
}
