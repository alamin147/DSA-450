// DSA 450 coding challenge: https://docs.google.com/spreadsheets/d/1dQawcrqlTwBCq8bUIzXRIKJd-8AJqnyg/edit#gid=1869443171

// ############################################################################################
//  1. reverse the array
//  Input  : arr[] = {1, 2, 3}  Output : arr[] = {3, 2, 1}
//  It also can be done by using a new array(copy to new one) then print the new one
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
void swap(int *a, int *b)
{
    int tem = *a;
    *a = *b;
    *b = tem;
}

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[high]);
    return (i + 1);
}

void QuickSort(int a[], int low, int high)
{
    // array will keep checking after dividing the array that array element is one(until code run then break)
    if (low < high)
    {
        // partition mean the index of the pivot element for partition(devide into two)
        int pi = partition(a, low, high);

        // after getting the pivot index, we can devide it into two, left containing lower than pivot and right containing higher than pivot
        // then we get two array, lower array and upper array, again sorting the separate two array as one(repeat the process until end of element in the array)

        // calling the sorting function again for lower array
        QuickSort(a, low, pi - 1);
        // pi is the index of pivot, which is in the right spot/location
        // calling the sorting function again for upper array
        QuickSort(a, pi + 1,high);
    }
}

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int k;
    scanf("%d",&k);

    QuickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n%dth max is %d\n%dth min is %d\n",k,a[n-k],k,a[k-1]);
}