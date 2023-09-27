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
        //  partition mean the index of the pivot element for partition(devide into two)
        int pi = partition(a, low, high);

        // after getting the pivot index, we can devide it into two, left containing lower than pivot and right containing higher than pivot
        // then we get two array, lower array and upper array, again sorting the separate two array as one(repeat the process until end of element in the array)

        // calling the sorting function again for lower array
        QuickSort(a, low, pi - 1);
        // pi is the index of pivot, which is in the right spot/location calling the sorting function again for upper array
        QuickSort(a, pi + 1, high);
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
    scanf("%d", &k);

    QuickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n%dth max is %d\n%dth min is %d\n", k, a[n - k], k, a[k - 1]);
}