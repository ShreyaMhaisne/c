#include <stdio.h>
#define max 20
int main()
{
    int i, j, k, set1[max], set2[max], l1, l2, ch, setunion[max], boolean = 1, setinter[max];
    int s = 0;
    printf("how many no u want for set 1:");
    scanf("%d", &l1);
    printf("enter elemnts for set 1 : ");
    for (i = 0; i < l1; i++)
        scanf("%d", &set1[i]);

    printf("how many no u want for set 2 : ");
    scanf("%d", &l2);
    printf("enter elemnts for set 2 : ");
    for (i = 0; i < l2; i++)
        scanf("%d", &set2[i]);

    printf("/n1] union /n2]intersection 3] differnce 4]set1-set2 5] set2-set1");
    printf("enter your choice");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        k = 0;
        for (i = 0; i < l1; i++)
        {
            setunion[k] = set1[i];
            k++;
        }
        for (j = 0; j < l2; j++)
        {
            boolean = 1;
            for (i = 0; i < l1; i++)
            {
                if (set2[j] == set1[i])
                {
                    boolean = 0;
                    break;
                }
            }

            if (boolean)
            {
                setunion[k] = set2[j];
                k++;
            }
        }
        printf("\n");
        printf("\nset union");
        for (i = 0; i < k; i++)
        {
            printf("%5d", setunion[i]);
        }

    case 2:
        for (j = 0; j < l2; j++)
        {
            for (i = 0; i < l1; i++)
            {
                if (set2[j] == set1[i])
                {
                    setinter[s] = set2[j];
                    s++;
                    
                }
            }
        }

        printf("\n");
        printf("\nset intersection");
        for (i = 0; i < s; i++)
        {
            printf("%5d", setinter[i]);
        }

        case 3:

    }
}