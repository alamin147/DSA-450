// 6. Find the Union and Intersection of the two sorted arrays. input: arr1[] = {1, 3, 4, 5, 7} arr2[] = {2, 3, 5, 6} Output: Union : {1, 2, 3, 4, 5, 6, 7}
// check elements in two, if small then add that and move to next element(smaller array) if equal choose either of them, then index increase both

#include <stdio.h>
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 7, 8, 9}, arr2[] = {2, 3, 5, 6, 10, 12, 15};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    int totalArr[m + n], lastElement = 0;
    int i = 0, j = 0;

    while (j < n && i < m)
    {
        if (arr1[i] < arr2[j])
        {
            totalArr[lastElement] = arr1[i];
            i++;
            lastElement++;
        }

        else if (arr1[i] > arr2[j])
        {
            totalArr[lastElement] = arr2[j];
            j++;
            lastElement++;
        }
        else
        {
            totalArr[lastElement] = arr2[j];
            j++;
            i++;
            lastElement++;
        }
    }
    while (i < m)
    {
        totalArr[lastElement] = arr1[i];
        i++;
        lastElement++;
    }
    while (j < n)
    {
        totalArr[lastElement] = arr2[j];
        j++;
        lastElement++;
    }

    for (int i = 0; i < lastElement; i++)
    {
        printf("%d ", totalArr[i]);
    }
}
