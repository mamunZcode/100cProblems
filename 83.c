#include<stdio.h>
#include<string.h>

struct TanisBall{
    char color[15];
    float weight;

};

int main()
{
    struct TanisBall Ball;
    struct TanisBall *myBall;
    scanf("%f",&Ball.weight);
    scanf("%s",&Ball.color);
    myBall=&Ball;
    printf("%f\n",myBall->weight);
    printf("%s",myBall->color);

return 0;
}
