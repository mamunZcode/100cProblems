#include<stdio.h>
#include<math.h>

int main() {

    int n, i, flag = 0;

    scanf("%d", &n);

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
