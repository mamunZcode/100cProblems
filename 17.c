#include<stdio.h>

int main() {

    double mark;
    scanf("%lf", &mark);

    if (mark <= 100 && mark >= 80) {
        printf("A+\n");

    } else if (mark < 80 && mark >= 70) {
        printf("A\n");
    } else if (mark < 70 && mark >= 60) {
        printf("A-\n");
    } else if (mark < 60 && mark >= 50) {
        printf("B\n");
    } else if (mark < 50 && mark >= 40) {
        printf("C\n");
    } else if (mark < 40 && mark >= 33) {
        printf("D\n");
    } else if (mark < 33) {
        printf("F\n");
    }

    return 0;
}
