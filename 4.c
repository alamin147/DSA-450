// 4 Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
// I use two array. one copied worked then paste it. Output 0,1,2 only. I initially made all element 1 then replace with 2 or 0 if found.
// input: [1 2 0 2 1 0 2] output: [0 0 1 1 2 2 2]

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        b[i] = 1;
    }

    int zero = 0, two = n - 1;
    for (int low = 0; low < n; low++)
    {
        if (a[low] == 0)
        {
            b[zero] = a[low];
            zero++;
        }
        else if (a[low] == 2)
        {
            b[two] = a[low];
            two--;
        }
        else
        {
            continue;
        }
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
