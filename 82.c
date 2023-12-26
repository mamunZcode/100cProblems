#include<stdio.h>
   
struct Book{
    int id;
    char title[50];
    char author[20];
};
int main()

{
    struct Book book1;
    struct Book book2;

    book1.id=101;
    strcpy(book1.title,"C Programming Hand Note");
    strcpy(book1.author,"Mukla.c");

    book2.id=102;
    strcpy(book2.title,"Programming with Fun");
    strcpy(book2.author,"Joy Billah");

    printf("Book1 Information:\n");
    printf("ID: %d\n",book1.id);
    printf("Title: %s\n",book1.title);
    printf("Author: %s\n\n",book1.author);

    printf("Book2 Information:\n");
    printf("ID: %d\n",book2.id);
    printf("Title: %s\n",book2.title);
    printf("Author: %s\n",book2.author);

return 0;
}
