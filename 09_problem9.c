/*
Problem:
Write a C program with a hardcoded array of 5 integers.
Copy all the elements of this array into another array.
Finally, print both arrays to show that the values are the same.

Example:
Original array: 10 20 30 40 50
Copied array:   10 20 30 40 50
*/
#include<stdio.h>
int main (){
    int arr1[]={10,20,30,40,50};
    int arr2[5];
    for(int i=0;i<5;i++){
        arr2[i]=arr1[i];
    }
    printf("original array:\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr1[i]);
    }
    printf("\nCopied array:\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}




