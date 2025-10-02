/*
Problem:
Write a C program to input 5 integers into an array.
Then find and print the maximum element in the array.
*/
#include<stdio.h>
int main(){
    int arr[5];
    printf("Please enter the integers you want to store in the array:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    printf("The maximum element in the array is %d",max);
}
