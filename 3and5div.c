#include<stdio.h>
int main()
{
 int n;
 printf("enter a number");
 scanf("%d",&n);
 if((n%3==0)||(n%5==0)){
    printf("its is divisible by 3 and 5");
 }
 else if((n%3==0)){
    printf("no is divisible by 3");
 }
 else if((n%5==0)){
    printf("no is divisible by 5");
 }
 else{
    printf("no is not divisble y 3 and 5");
 }
}