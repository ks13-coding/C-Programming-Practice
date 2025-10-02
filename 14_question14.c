/* Question 14: Reverse an array in-place

Description:
  Given an array of n integers, reverse the array elements in-place.
  (Do not use another array of size n.)

Input:
  - Either hardcode the array, OR
  - Take n and then n integers from the user.

Output:
  - Print the array before reversing.
  - Print the array after reversing.

Requirements:
  - Use two-index (or two-pointer) technique:
      * start = 0, end = n-1
      * swap arr[start] and arr[end]
      * move start++, end-- until start >= end
  - Avoid off-by-one mistakes.
  - Show both the original and reversed arrays clearly.

Example run:
  Input: n = 5, arr = 10 20 30 40 50
  Output before: 10 20 30 40 50
  Output after:  50 40 30 20 10

Difficulty: Easy-Medium
Skills practiced: arrays, swapping, careful index handling
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements you want in arraay:");
    if (scanf("%d", &n) != 1 || n <= 0) {
         printf("Invalid input for n.\n");
         return 0;
     }
    int arr[n];
    printf("\nEnter the elements you want in the array:");
    for (int i = 0; i < n; i++) {
         if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input for array element.\n");
            return 1;
         }
     }
    printf("\nThe original array is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
        for(int i=0;i<n/2;i++){
            int temp = arr[i];
            arr[i]=arr[n-i-1];
            arr[n-i-1]=temp;
        }
        printf("\nThe reversed array is :");
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
//THE FOLLOWING CODE IS GIVEN BY CHATGPT
// #include <stdio.h>

// int main(void)
// {
//     int n;

//     printf("Enter the number of elements you want in array: ");
//     if (scanf("%d", &n) != 1 || n <= 0) {
//         printf("Invalid input for n.\n");
//         return 1;
//     }

//     int arr[n];  /* VLA — ok for C99/C11 compilers */

//     printf("Enter the elements you want in the array:\n");
//     for (int i = 0; i < n; i++) {
//         if (scanf("%d", &arr[i]) != 1) {
//             printf("Invalid input for array element.\n");
//             return 1;
//         }
//     }

//     printf("\nThe original array is: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     /* Reverse in-place by swapping */
//     for (int i = 0; i < n / 2; i++) {
//         int temp = arr[i];
//         arr[i] = arr[n - 1 - i];
//         arr[n - 1 - i] = temp;
//     }

//     printf("The reversed array is: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

