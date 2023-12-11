#include<stdio.h>

int main() {
    int i;
    for (i = 10; i < 20; i++) {
        if (i % 2 == 0)
            continue;
        printf("%d ", i); //Output: 11 13 15 17
        if (i > 16)
            break;
    }
    return 0;
}
