// 8. find Largest sum contiguous Subarray [V. IMP]
// input: Arr[] = {1,2,3,-2,5} output: 9
// maximum sum in subarray
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n],sum = 0, max = -INFINITY;;
//     for (int i = 0; i < n; i++)
//     { scanf("%d", &a[i]); }

//     for (int i = 0; i < n; i++)
//     {   sum += a[i];
//         if (sum > max)
//         { max = sum; }
//         if (sum < 0)
//         {  sum = 0;  } }
//     printf("%d\n", max);
// }

// 