// 5. Move all the negative elements to one side of the array
// Input: -12, 11, -13, -5, 6, -7, 5, -3, -6 Output: -12 -13 -5 -7 -3 -6 11 6 5

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n], j = 0, k = n - 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    { // if found negative then element is moved to new array's starting positions and so on.
        if (a[i] < 0)
        {
            b[j] = a[i];
            j++;
        }
        // positive values will be moved to the end of array then come back to start
        else
        {
            b[k] = a[i];
            k--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}
