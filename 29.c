#include<stdio.h>

int main() {

    int n, i;
    printf("Enter the input number: \n");
    scanf("%d", &n);
    printf("********* Multiplication Table of %d *************\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
