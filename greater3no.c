#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter 3 no ");
    scanf("%d%d%d",&n1,&n2,&n3);

    if((n1>n2)&& (n1>n3)){
        printf("greater no is %d",n1);
    }
    
    else if((n2>n1)&& (n2>n3)){
        printf("greater no is %d",n2);
    }
    
    else{
        printf("greater no is %d",n3);
    }
}