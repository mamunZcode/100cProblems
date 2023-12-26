#include<stdio.h>
#include<string.h>

struct Writer{
    char name[20];
    char genre[20];

};

int main()
{

    struct Writer writerRecords[3];
    strcpy(writerRecords[0].name,"Mukla.c");
    strcpy(writerRecords[0].genre,"Technical");
    strcpy(writerRecords[1].name,"Mostasim Billah");
    strcpy(writerRecords[1].genre,"Technical");
    strcpy(writerRecords[2].name,"Mahadi Hasan Joy");
    strcpy(writerRecords[2].genre,"Technical");

    int i;
    for(i=0;i<3;i++)
    {
        printf("%d.\n",i+1);

        printf("%s\n",writerRecords[i].name);
        printf("%s\n",writerRecords[i].genre);
    }

return 0;
}
