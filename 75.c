#include<stdio.h>

int main()
{
    int *px,*py;
    int X,Y;
    X=100;
    Y=200;
    px=&X;
    py=&Y;
    printf("%d\n%d\n",*px,*py);


return 0;
}
