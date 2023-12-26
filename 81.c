#include<stdio.h>

struct student{
    int id;
    float cgpa;
    char name[20];
};
int main()

{
    struct student s1;
    printf("Enter ID: ");
    scanf("%d",&s1.id);
    printf("Enter CGPA: ");
    scanf("%f",&s1.cgpa);
    printf("Enter Name: ");
    scanf("%s",&s1.name);
    printf("\n**Students Information**\n\n");
    printf("ID: %d\n",s1.id);
    printf("CGPA: %f\n",s1.cgpa);
    printf("Name: %s\n",s1.name);


}
