#include<stdio.h>

int toUpperCase(char alphabet) {
    int convert;
    convert = alphabet;
    convert = convert - 32;
    return convert;
}

int main() {
    char alphabet;
    scanf("%c", &alphabet);
    alphabet = toUpperCase(alphabet);
    printf("%c\n", alphabet);

    return 0;
}
