// DSA 450 coding challenge: https://docs.google.com/spreadsheets/d/1dQawcrqlTwBCq8bUIzXRIKJd-8AJqnyg/edit#gid=1869443171

// ################################################################################################
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

// ####################################################################################################

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
// ####################################################################################################

// 3. Find the "Kth" max and min element of an array
// Input: N = 6 arr[] = 7 10 4 3 20 15 K = 3 Output : 7 Explanation : 3rd smallest element in the given  array is 7.

// #include <stdio.h>
// void swap(int *a, int *b)
// {
//     int tem = *a;
//     *a = *b;
//     *b = tem;
// }

// int partition(int a[], int low, int high)
// {
//     int pivot = a[high];
//     int i = low - 1;
//     for (int j = low; j < high; j++)
//     {
//         if (a[j] < pivot)
//         {
//             i++;
//             swap(&a[i], &a[j]);
//         }
//     }
//     swap(&a[i + 1], &a[high]);
//     return (i + 1);
// }

// void QuickSort(int a[], int low, int high)
// {
//     // array will keep checking after dividing the array that array element is one(until code run then break)
//     if (low < high)
//     {
//         // partition mean the index of the pivot element for partition(devide into two)
//         int pi = partition(a, low, high);

//         // after getting the pivot index, we can devide it into two, left containing lower than pivot and right containing higher than pivot
//         // then we get two array, lower array and upper array, again sorting the separate two array as one(repeat the process until end of element in the array)

//         // calling the sorting function again for lower array
//         QuickSort(a, low, pi - 1);
//         // pi is the index of pivot, which is in the right spot/location
//         // calling the sorting function again for upper array
//         QuickSort(a, pi + 1,high);
//     }
// }

// int main()
// {

//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int k;
//     scanf("%d",&k);

//     QuickSort(a, 0, n - 1);

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     printf("\n%dth max is %d\n%dth min is %d\n",k,a[n-k],k,a[k-1]);
// }

// ###################################################################################################

// 4 Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
// I use two array. one copied worked then paste it. Output 0,1,2 only. I initially made all element 1 then replace with 2 or 0 if found.
// input: [1 2 0 2 1 0 2] output: [0 0 1 1 2 2 2]
// #include <stdio.h>
// int main()
// {

//     int n;
//     scanf("%d", &n);
//     int a[n], b[n];

//     for (int i = 0; i < n; i++)
//     { scanf("%d", &a[i]);}

//     for (int i = 0; i < n; i++)
//     {  b[i] = 1; }

//     int zero = 0, two = n - 1;
//     for (int low = 0; low < n; low++)
//     {
//         if (a[low] == 0)
//         {
//             b[zero] = a[low];
//             zero++;
//         }
//         else if (a[low] == 2)
//         {
//             b[two] = a[low];
//             two--;
//         }
//         else
//         {
//             continue;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     { a[i] = b[i]; }

//     for (int i = 0; i < n; i++)
//     { printf("%d ",a[i]);}
// }

// ###################################################################################################
// 5. Move all the negative elements to one side of the array
// Input: -12, 11, -13, -5, 6, -7, 5, -3, -6 Output: -12 -13 -5 -7 -3 -6 11 6 5

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n], b[n], j = 0, k = n - 1;
//     for (int i = 0; i < n; i++)
//     { scanf("%d", &a[i]);  }

//     for (int i = 0; i < n; i++)
//     { // if found negative then element is moved to new array's starting positions and so on.
//         if (a[i] < 0)
//         {  b[j] = a[i];
//             j++; }
//         // positive values will be moved to the end of array then come back to start
//         else
//         { b[k] = a[i];
//             k--; }
//     }

//     for (int i = 0; i < n; i++)
//     {printf("%d ", b[i]); }}

// ###################################################################################################

// 6. Find the Union and Intersection of the two sorted arrays. input: arr1[] = {1, 3, 4, 5, 7} arr2[] = {2, 3, 5, 6} Output: Union : {1, 2, 3, 4, 5, 6, 7}
// check elements in two, if small then add that and move to next element(smaller array) if equal choose either of them, then index increase both
// #include <stdio.h>
// int main()
// {
//     int arr1[] = {1, 2, 3, 4, 5, 7, 8, 9}, arr2[] = {2, 3, 5, 6, 10, 12, 15};
//     int m = sizeof(arr1) / sizeof(arr1[0]);
//     int n = sizeof(arr2) / sizeof(arr2[0]);

//     int totalArr[m + n], lastElement = 0;
//     int i = 0, j = 0;

//     while (j < n && i < m)
//     { if (arr1[i] < arr2[j])
//         { totalArr[lastElement] = arr1[i];
//             i++;
//             lastElement++; }

//         else if (arr1[i] > arr2[j])
//         { totalArr[lastElement] = arr2[j];
//             j++;
//             lastElement++; }
//         else
//         { totalArr[lastElement] = arr2[j];
//             j++;
//             i++;
//             lastElement++; }
//     }
//     while (i < m)
//     {  totalArr[lastElement] = arr1[i];
//         i++;
//         lastElement++; }
//     while (j < n)
//     { totalArr[lastElement] = arr2[j];
//         j++;
//         lastElement++;   }

//     for (int i = 0; i < lastElement; i++)
//     { printf("%d ", totalArr[i]);  }
// }

