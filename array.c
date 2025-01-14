#include <stdio.h>
int main()
{
    int a[100], n, i;
    printf("enter n no :");
    scanf("%d ", &n);
    printf("enter nos");
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d ", a[i]);
    }
}