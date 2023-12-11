#include<stdio.h>
#include<math.h>

int main() {
    int i, count = 0;
    float x;

    scanf("%f", &x);
    while (x > 1) {
        x = x / 2;
        count++;
    }
    printf("%d\n", count);
    count = 0;

    return 0;
}
