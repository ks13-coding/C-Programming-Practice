/* Problem: Rotate array right by k (in-place)

Description:
  Given an array of n integers, rotate the array to the right by k steps.
  Example: [1 2 3 4 5], k=2 → [4 5 1 2 3]

Input:
  - Either hardcode the array, or
  - Take n, then n integers, and then k from the user.

Output:
  Print the rotated array after performing the rotation.

Requirements:
  - Do the rotation in-place (no extra array of size n).
  - If k >= n, first do k = k % n.
  - Use the three-reverse method:
      1) reverse the entire array
      2) reverse the first k elements
      3) reverse the remaining n-k elements
  - Avoid off-by-one mistakes.

Example runs:
  Input: arr = {1,2,3,4,5}, k = 2
  Output: 4 5 1 2 3

  Input:
    n = 5
    arr = 1 2 3 4 5
    k = 7
  Output: 4 5 1 2 3

Difficulty: Medium
*/
// SCROLL DOWN
//  #include <stdio.h>
//  int main()
//  {
//    int n;
//    int k;
//    int r;
//    printf("Enter n, number of integers in the array:");
//    if (scanf("%d", &n) != 1 || n <= 0)
//    {
//      printf("\nInvalid input for n.");
//      return 0;
//    }
//    int arr[n];
//    printf("\nEnter the integers in the array: ");
//    for (int i = 0; i < n; i++)
//    {
//      if (scanf("%d", &arr[i]) != 1)
//      {
//        printf("\nInvalid input for the integers in array.");
//        return 0;
//      }
//    }
//    printf("\nThe array is:");
//    for (int i = 0; i < n; i++)
//    {
//      printf("%d ", arr[i]);
//    }
//    for (int i = 0; i < n / 2; i++)
//    {
//      int temp = arr[i];
//      arr[i] = arr[n - i - 1];
//      arr[n - i - 1] = temp;
//    }
//    printf("\nEnter k,to rotate the array right by k (in-place):");
//    if (scanf("%d", &k) != 1 || k < 0)
//    {
//      printf("\nInvalid input for k.");
//      return 0;
//    }
//    if (k <= n)
//    {
//      for (int i = 0; i < k; i++)
//      {
//        int temp = arr[i];
//        arr[i] = arr[k - i - 1];
//        arr[k - i - 1] = temp;
//      }
//    }
//    if (k > n)
//    {
//      r = k % n;
//      for (int i = 0; i < r; i++)
//      {
//        int temp = arr[i];
//        arr[i] = arr[r - i - 1];
//        arr[r - i - 1] = temp;
//      }
//    }
//    printf("\nThe required reversed array is: ");
//    for(int i=0;i<n;i++){
//      printf("%d ",arr[i]);
//    }
//  }
//BELOW CODE IS THE RIGHT ONE NOW:
#include <stdio.h>
void reverse_array(int arr[], int a, int b)
{
  while (a < b)
  {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    a++;
    b--;
  }
}
int main()
{
  int n;
  int k;
  printf("Enter n, number of integers in the array:");
  if (scanf("%d", &n) != 1 || n <= 0)
  {
    printf("\nInvalid input for n.");
    return 0;
  }
  int arr[n];
  printf("\nEnter the integers in the array: ");
  for (int i = 0; i < n; i++)
  {
    if (scanf("%d", &arr[i]) != 1)
    {
      printf("\nInvalid input for the integers in array.");
      return 0;
    }
  }
  printf("\nThe array is:");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\nEnter k,to rotate the array right by k (in-place):");
  if (scanf("%d", &k) != 1 || k < 0)
  {
    printf("\nInvalid input for k.");
    return 0;
  }
  k=k%n;
  if(k != 0){
    reverse_array(arr, 0, n - 1);
    reverse_array(arr, 0, k - 1);
    reverse_array(arr, k, n - 1);
  }
    printf("The required reversed array is: ");
    for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
    }
    return 0;
  }


