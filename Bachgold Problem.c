// 749A	Bachgold Problem
#include <stdio.h>

int main()
{

    int n, i = 2, j = 0, count[10000];
    scanf("%d", &n);
    while (n != 0)
    {
        if (n - i == 0)
        {
            count[j] = i;
            j++;
            break;
        }

        if (n - i >= 2)
        {
            n = n - i;
            count[j] = i;
            j++;
        }
        else
        {
            i++;
        }
    }

    printf("%d\n", j);
    for (int k = 0; k < j; k++)
    {
        printf("%d ", count[k]);
    }
}
