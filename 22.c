#include<stdio.h>

int main() {
    char letter;
    printf("Enter a small letter alphabet:\n");
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        printf("%c is Vowel\n", letter);
    } else {
        printf("%c is Consonant\n", letter);
    }

    return 0;
}
