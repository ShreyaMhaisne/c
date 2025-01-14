#include <stdio.h>
int main()
{
    int a[100], i, j, key, pos, n;
    printf("enter no");
    scanf("%d", &n);

    printf("array");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("enter a position");
    scanf("%d", &pos);

    if(pos>=0 && pos<=n){
        printf("enter a value ");
        scanf("%d",&key);

        for(i=n;i>pos;i--)
        a[i]=a[i-1];
        a[pos-1]=key;
        n++;


    printf("after insertion ");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}
  else
  printf("position inavalid ");

  return 0;
}