#include <stdio.h>
struct emp{
int id;
int age;

};
void show(struct emp e){

printf("%d %d",e.age,e.id);

}

int main() {
    struct emp e;
    e.age = 15;e.id =1023;
    show(e);
    return 0;
}
//struct employe e = {"name",15,23};
