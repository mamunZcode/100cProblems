#include<stdio.h>

void evenOdd(int number) {
    if (number % 2 == 0)
        printf("EVEN\n");
    else
        printf("ODD\n");
}

int main() {
    int number;
    scanf("%d", &number);
    evenOdd(number);

    return 0;
}
