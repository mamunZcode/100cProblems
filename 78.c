#include<stdio.h>

int main(){
    int VAR;
    VAR=500;
    int *ptr;
    ptr=&VAR;
    int **pptr;
    pptr=ptr;

    printf("%d\n",VAR);
    printf("%d\n",*ptr);
    printf("%d\n",*pptr);

return 0;

}
