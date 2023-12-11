#include<stdio.h>

int main() {

    int age;
    scanf("%d", &age);

    if (age < 18) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}
