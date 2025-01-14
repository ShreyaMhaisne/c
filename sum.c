#include <stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    printf("enter a no ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum of no is %d",sum);
    
    return 0;
}