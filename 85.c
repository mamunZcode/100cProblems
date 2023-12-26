#include<stdio.h>
#include<string.h>

struct Product{
    char name[15];
    double price;

}myProduct;

void printProductInfo(struct Product p)
{
    printf("Product Name: %s\n",p.name);
    printf("Product Price: %.2lf",p.price);
}



int main()
{


    strcpy(myProduct.name,"Sunsilk");
    myProduct.price=2.00;

    printProductInfo(myProduct);
return 0;
}
