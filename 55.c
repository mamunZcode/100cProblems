#include<stdio.h>

int intSum(int a, int b) {
    int total;
    total = a + b;
    return total;
}

int main() {
    int value1, value2, sum;
    scanf("%d%d", &value1, &value2);
    sum = intSum(value1, value2);
    printf("%d", sum);

    return 0;
}
