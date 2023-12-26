#include<stdio.h>

int main()

{
    float food;
    int day=0;

    printf("Enter dogs food in kg: ");
    scanf("%f",&food);

    while(food>1)
    {
        food=food/2;
        day++;
    }

    printf("Result is: %d day",day);

return 0;
}
