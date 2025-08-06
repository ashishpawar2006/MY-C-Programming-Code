#include <stdio.h>
int num,avg;
int i;
int sum=0;
int main() {
    printf("Enter an integer: ");
    scanf("%d", &num);
   for(i=num;i<=num+10;i++){
       sum=sum+i;
    } 
    avg=sum/10;
    
   printf("the sum of next 10 digits is :- %d \n",sum);
   printf("the average of next 10 digits is :-%d \n",avg);
    return 0;
}
