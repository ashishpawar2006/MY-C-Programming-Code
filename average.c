#include <stdio.h>
void avg(int a,int b){
  int c=a+b;
  float avg =c/2;
  printf(" Average of %d and %d number = %f",a,b,avg);
}
int main() {
     int a;
     int b;
    printf("enter your first number :\n");
    scanf("%d",&a);
    printf("enter your second number :\n");
    scanf("%d",&b);
    avg(a,b);
    return 0;
    }
