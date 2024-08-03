#include <stdio.h>
struct book
{
    char name[50];
    char author[50];
    int price,pages;



};
int main()
{
    struct book book1 = {"c programming","Rupok",42,20};

    printf("the book name is %s \nthe author is %s\npages is %d\nprice is %d\n",book1.name,book1.author,book1.price,book1.pages);
    return 0;
}
