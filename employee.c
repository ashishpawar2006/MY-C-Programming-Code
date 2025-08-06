#include <stdio.h>
#include <string.h>
struct employee {
  int id;
  char name[50];
  int age;
  int salary;
  char field[50];
};
int main() {
    struct employee e1;
    e1.id=1;
    strcpy(e1.name,"Rahul");
    e1.age=24;
    e1.salary=50000;
    strcpy(e1.field,"AI");
    printf(" My id is %d \n My name is %s \n My age is %d \n",e1.id,e1.name,e1.age);
     printf(" My salary is %d \n My field is %s ",e1.salary,e1.field);
    return 0;
