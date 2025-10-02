/*
Problem:
Write a C program to store 5 integers in an array and then
print them one by one.
*/
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("The value of integer at index %d is %d\n",i,arr[i]);
    }
}
