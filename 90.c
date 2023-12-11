#include<stdio.h>

int main() {
    char par[100000];
    FILE *file;
    file = fopen("paragraph.txt", "r");
    while (fgets(par, 10000, file)) {
        printf("%s", par);
    }
    printf("\n");
}
