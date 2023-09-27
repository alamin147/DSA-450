// 2. Find the maximum and minimum element in an array
// Input: arr[] = {3, 5, 4, 1, 9} Output: Minimum : 1 Maximum : 9

#include <stdio.h>
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0], min = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        else if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("Max= %d\nMin= %d\n", max, min);
}