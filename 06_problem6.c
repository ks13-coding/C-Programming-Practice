/*
Problem:
Write a C program to input 5 integers into an array.
Then print the array in reverse order.*/
#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter the integers you want to store in the array:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements you entered in the arrays are:\n");
    for(int i=0;i<5;i++){
    printf("%d   ",arr[i]);
    }
    printf("\nThe elements of array in reverse order looks like:\n");
    for(int i=4;i>=0;i--){
        printf("%d   ",arr[i]);
    }
    return 0;
}

