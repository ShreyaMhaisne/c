#include <stdio.h>
int main()
{
    int n, a[100], i, b[100], c[100],bn=0,cn=0;
    printf("enter no ");
    scanf("%d", &n);

    printf("enter array ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++){
        if (a[i] % 2 == 0){
            b[bn] = a[i];
            bn++;
        }
        else{
            c[cn] = a[i];
            cn++;
        }
    }
    if(bn!=0){
        for(i=0;i<bn;i++)
        printf(" even %d \n",b[i]);
    }
    if(cn!=0){
        for(i=0;i<cn;i++)
        printf(" odd %d \n",c[i]);
    }
}