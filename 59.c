#include<stdio.h>

double findMax(double value1, double value2, double value3) {
    if (value1 >= value2 && value1 >= value3)
        return value1;
    else if (value2 >= value3)
        return value2;
    else
        return value3;
}

int main() {
    double number1, number2, number3, maximum = 0;
    scanf("%lf%lf%lf", &number1, &number2, &number3);
    maximum = findMax(number1, number2, number3);
    printf("Maximum Number: %.2llf", maximum);

    return 0;
}
