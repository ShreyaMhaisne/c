#include<stdio.h>
int main()
{
    int a[100],i,n,p;
    printf("enter a no ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d ",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
    if(a[i]%2==0){
        
        printf("\nits even no %d ",a[i]);
    }
   else{
    printf("its odd %d ",a[i]);
   }
    return 0;
}