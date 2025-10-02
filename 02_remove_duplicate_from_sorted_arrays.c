// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

// Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
// Return k.
// Custom Judge:

// The judge will test your solution with the following code:

// int[] nums = [...]; // Input array
// int[] expectedNums = [...]; // The expected answer with correct length

// int k = removeDuplicates(nums); // Calls your implementation

// assert k == expectedNums.length;
// for (int i = 0; i < k; i++) {
//     assert nums[i] == expectedNums[i];
// }
// If all assertions pass, then your solution will be accepted.
// #include<stdio.h>
// int main(){
//     int c ;
//     int nums[]={1,1,2,3,4,5,6,2,1,3,4};
//     for(int i=0;i<11;i++){
//         for(int j=1;j<11;j++){
//             if(nums[j]!=nums[i]){
//                 i++;
//                 nums[i]=nums[j];
//                 c=i+1;
//             }
//         }
//     }
//     printf("The number of unique elements in the array is %d",c);
//     return 0;
// }
 #include <stdio.h>

int main(void) {
    int nums[] = {1,1,2,3,4,5,6,2,1,3,4};
    int n = sizeof(nums)/sizeof(nums[0]);
    
    int i = 0; // slow pointer
    for (int j = 1; j < n; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    
    int c = i + 1; // number of unique elements
    
    printf("The number of unique elements in the array is %d\n", c);
    printf("The array after removing duplicates (first %d elements): ", c);
    for (int k = 0; k < c; k++) {
        printf("%d ", nums[k]);
    }
    printf("\n");

    return 0;
}
