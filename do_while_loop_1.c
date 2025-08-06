#include <stdio.h>
int num;
int i;
int sum=0;
int main() {
    printf("Enter an integer: ");
    scanf("%d", &num);
    i=num;
    do{
       sum=sum+i;
       i=i+1;
    }while(i<=num+10);
    
    printf("the sum of next 10 digits is :- %d \n",sum);
  
    return 0;
} 

