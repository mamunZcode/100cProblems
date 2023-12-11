#include<stdio.h>

int main() {

    double gpa;
    scanf("%lf", &gpa);

    if (gpa < 5.00) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}
