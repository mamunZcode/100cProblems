#include<stdio.h>

int main()
{
    FILE *file;
    int n[10];
    int i=0,sum=0;

    file = fopen("integers89.txt", "r");
    while(fscanf(file,"%d",&n[i])!=EOF)
         i++;
    for(i =0;i < 10 ;i++)
    {
        sum=sum+n[i];
    }
    printf("%.2f",sum/10.0);

}
