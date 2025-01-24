#include <stdio.h>
int main()
{
    int i, j, r, c, sum;
    int a[10][10];
    printf("enter no of row ");
    scanf("%d", &r);

    printf("enter no of col ");
    scanf("%d", &c);

    printf("enter matrix");
    for (i = 0; i < r; i++)
    { // accept matrix
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }

    printf("addition \n");
    for (i = 0; i < r; i++)
    {
       // sum = 0; // add  row matrix
        for (j = 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
          //  sum += a[i][j];
        }
        printf("\n");
    }

     for (j = 0; j < c; j++)
    {
        sum = 0; // add  col matrix
        for (i = 0; i < r; i++)
        {
           // printf("%d\t", a[i][j]);
            sum += a[i][j];
        }
        printf("%d\t", sum);
    }
}