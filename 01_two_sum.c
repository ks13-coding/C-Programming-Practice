// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
 #include<stdio.h>
int main(){
    int n;
    printf("Enter n, the length of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("\nInvalid input for n.");
        return 1;
    }
    int nums[n];
    printf("\nEnter the integers in your array:");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            printf("\nInvalid input for integer(s) in array");
            return 1;
        }
    }
    int target;
    printf("\nEnter the target integer:");
    if (scanf("%d", &target) != 1) {
        printf("\nInvalid input for target integer.");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("\nThe required indices are %d,%d\n", i, j);
                return 0;
            }
        }
    }
    printf("\nSuch case is not in existence with the given array");
    return 0;
}
