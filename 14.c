#include<stdio.h>

int main() {

    double tempareture, farenheit;
    scanf("%lf", &tempareture);
    farenheit = ((tempareture * (9.0 / 5)) +
                 32); // Two integer division resulting one integer. For this reason we use one double number to divide by 9.0/5.
    printf("%lf\n", farenheit);


    return 0;
}
