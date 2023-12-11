#include<stdio.h>

float add(int number1, int number2) {
    float result;
    result = number1 + number2;
    return result;
}

float subtract(int number1, int number2) {
    float result;
    result = number1 - number2;
    return result;
}

float multiply(int number1, int number2) {
    float result;
    result = number1 * number2;
    return result;
}

float divide(int number1, int number2) {
    float result;
    result = number1 / number2;
    return result;
}

int main() {
    int value1, value2;
    float add_result, sub_result, mult_result, div_result;
    scanf("%d%d", &value1, &value2);
    add_result = add(value1, value2);
    sub_result = subtract(value1, value2);
    mult_result = multiply(value1, value2);
    div_result = divide(value1, value2);

    printf("Add value:             %.2f\n\n", add_result);
    printf("Subtraction value:     %.2f\n\n", sub_result);
    printf("Multiplication value:  %.2f\n\n", mult_result);
    printf("Divided value:         %.2f\n", div_result);
    return 0;
}
