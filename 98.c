#include<stdio.h>
#include<string.h>

int main() {
    char a[21];
    char b[21];
    char add[22];
    memset(a, 48, sizeof(a));
    memset(b, 48, sizeof(b));
    memset(add, 48, sizeof(add));
    int i, buff;
    gets(a);
    gets(b);

    printf("%s %s", a, b);
    strrev(a);
    strrev(b);
    int l = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
    int carry = 0;
    for (i = 0; i < 20; i++) {
        int n1 = a[i] - 48;
        int n2 = b[i] - 48;
        buff = (n1 + n2 + carry);
        carry = buff / 10;
        buff %= 10;
        add[i] = buff + 48;

    }


    strrev(add);
    printf("\n%s %s %d\n%s", a, b, l, add);


    return 0;
}
