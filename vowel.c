#include<stdio.h>
int main()
{
    char n;
    printf("enter character");
    scanf("%c",&n);

    if((n=='a' || n=='e' || n=='o' || n=='i' || n=='u' )){
        printf("it is small vowel");
    }
     else if((n=='A' || n=='E' || n=='I' || n=='O' || n=='U' )){
        printf("it is big vowel");
    }
    else if((n>=65)&& (n<=90)){
        printf("it is capital character");
    }
    else if((n>=97)&&(n<=122)){
        printf("it is small charater");
    }
    else if((n>=48)&&(n<=57)){
        printf("its a number");
    }
     else{
        printf("it's other charcter");
    }
}