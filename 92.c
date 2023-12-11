#include<stdio.h>
#include<math.h>

int main() {

    int x1, x2, y1, y2;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    double distance = pow((x1 - x2), 2) + pow((y1 - y2), 2);
    distance = sqrt(distance);

    printf("%lf\n", distance);

    return 0;
}
