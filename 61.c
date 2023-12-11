#include<stdio.h>

double absValue(double value) {
    if (value < 0)
        return value * (-1);
    else
        return value * (1);
}

int main() {
    double number;
    scanf("%lf", &number);
    number = absValue(number);
    printf("%.2lf", number);
    return 0;
}
