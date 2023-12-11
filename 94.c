#include<stdio.h>
#include<math.h>

int factorial(int a) {
    if (a == 0)
        return 1;
    else
        return a * factorial(a - 1);
}

int main() {

    long long int a, b, sum;

    scanf("%lld%lld", &a, &b);
    sum = factorial(a) + factorial(b);

    printf("%lld", sum);


    return 0;
}
