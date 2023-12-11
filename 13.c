#include<stdio.h>

int main() {

    int a, b, x, y;
    int result;
    scanf("%d%d%d%d", &a, &b, &x, &y);
    result = (a * b) + (x * y);
    printf("%d\n", result);

    return 0;
}