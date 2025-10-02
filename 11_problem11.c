/*
Problem:
Write a C program with a hardcoded array of 6 integers.
Find and print the second largest element in the array.

Example:
Array: 12 45 23 89 34 67
Output: The second largest element is 67
*/
// SOLUTION BY CHATGPT:
#include <stdio.h>
int main()
{
    int arr[6] = {12, 45, 23, 89, 34, 67};

    int max1 = arr[0];
    int max2 = -1;

    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;   // shift current max to second max
            max1 = arr[i]; // update max
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }
}