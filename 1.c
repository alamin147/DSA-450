
//  1. reverse the array
//  Input  : arr[] = {1, 2, 3}  Output : arr[] = {3, 2, 1}
//  It also can be done by using a new array(copy to new one) then print the new one
#include <stdio.h>
#include <string.h>
int main()
{
    freopen("output.txt", "w", stdout);
    int a[500];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 5 - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    char ab[1001];
    scanf("%s", ab);
    int len = strlen(ab);
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", ab[i]);
    }
}
