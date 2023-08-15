// DSA 450 coding challenge: https://docs.google.com/spreadsheets/d/1dQawcrqlTwBCq8bUIzXRIKJd-8AJqnyg/edit#gid=1869443171

// ############################################################################################
//  1. reverse the array
//  Input  : arr[] = {1, 2, 3}  Output : arr[] = {3, 2, 1}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// ________________________
// int a[500];
// for (int i = 0; i < 5; i++)
// {
//     scanf("%d", &a[i]);
// }
// for (int i = 5 - 1; i >= 0; i--)
// {
//     printf("%d ", a[i]);
// }
// ______________________________
// char a[1001];
// scanf("%s",a);
// int len = strlen(a);
// for (int i = len-1; i >=0; i--)
// {
//    printf("%c",a[i]);
// }
// }

// #####################################################################################

// 2. Find the maximum and minimum element in an array
// Input: arr[] = {3, 5, 4, 1, 9} Output: Minimum : 1 Maximum : 9
// #include <stdio.h>
// int main()
// {int a[5];
//     for (int i = 0; i < 5; i++)
//     { scanf("%d", &a[i]);}
//     int max = a[0], min = a[0];
//     for (int i = 0; i < 5; i++)
//     { if (max < a[i])
//         { max = a[i];}
//         else if (min > a[i])
//         { min = a[i];}}
//     printf("Max= %d\nMin= %d\n",max,min);}
// #####################################################################################

// 3. Find the "Kth" max and min element of an array
// Input: N = 6 arr[] = 7 10 4 3 20 15 K = 3 Output : 7 Explanation : 3rd smallest element in the given  array is 7.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tem = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tem;
            }
        }
    }
    printf("%d\n", arr[k - 1]);
}