#include <stdio.h>
int main()
{
    int cnt = 0;
    int i, n, key, a[100];
    printf("enter number");
    scanf("%d", &n);

    printf("enter an array");
    scanf("%d",&a[i]);
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("enter a key ");
    scanf("%d", &key);

    for(i=0;i<n;i++){
        if(a[i]==key){
            cnt++;
        }
    }
    cnt=0;
    if(cnt==0)
    printf("%d is not found",key);
    else
    printf("occurence of %d is %d",key,cnt);
}