#include<stdio.h>
int main()
{
    int a[100],i,flag=0,j,key,n;
    printf("enter no of array ");
    scanf("%d ",&n);

   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }

   printf("enter a delet no");
   scanf("%d",&key);
   flag=0;
   for(i=0;i<n;i++){
    if(key==a[i]){
        for(j=i;j<n-1;j++)
        a[j]=a[j+1];
        n--;
        flag=1;
        i--;
    }
   }
if (flag)
    printf("successfully");
else
printf("not found ");

for(i=0;i<n;i++){
    printf("%d ", a[i]);
}
}