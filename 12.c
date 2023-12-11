#include<stdio.h>

int main() {
    int i = 0;
    int j = 0;
    j = i++ + ++i;
    printf("%d %d", i, j);//Output : 2 2

    return 0;
}
