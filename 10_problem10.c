/*
Problem:
Write a C program with a hardcoded array of 5 integers.
Copy all the elements of this array into another array,
but in reverse order.

Example:
Original array: 10 20 30 40 50
Copied array:   50 40 30 20 10
*/
#include<stdio.h>
int main(){
    int arr1[]={10,20,30,40,50};
    int arr2[5];
    for(int i=4;i>=0;i--){
         arr2[i]= arr1[4-i];
    }
    printf("Original array:\n");
    for(int i=0;i<5;i++){
         printf("%d ",arr1[i]);
    }
    printf("\nCopied array:\n");
    for(int i=0;i<5;i++){
         printf("%d ",arr2[i]);
    }
    return 0;

}