#include<stdio.h>

int main()
{
    int c;
    FILE *file;

    file = fopen("newFile.txt", "w");
    fprintf(file, "%s", "We Love");
    fclose(file);

    file = fopen("newFile.txt", "r");
    if (file) {
        while ((c = getc(file)) != EOF)
            putchar(c);
        fclose(file);
    }
    printf("\n");

    file=fopen("newFile.txt", "a");
    fprintf(file,"%s"," Our Country");
    fclose(file);

    file = fopen("newFile.txt", "r");
    if (file) {
        while ((c = getc(file)) != EOF)
            putchar(c);
        fclose(file);
    }

}
