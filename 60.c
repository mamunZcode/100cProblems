#include<stdio.h>

float dollarToBDT(float dollar) {
    float taka = dollar * 78.55;
    return taka;
}

int main() {
    float USD, tk;
    scanf("%f", &USD);
    tk = dollarToBDT(USD);
    printf("%.2f Taka.\n", tk);
    return 0;
}
