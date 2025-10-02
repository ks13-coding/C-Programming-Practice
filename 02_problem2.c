/*
Problem:
Write a C program to input 5 integers into an array.
Then calculate and print the sum of all the elements
in the array.
*/
#include<stdio.h>
int main(){
   int arr[5];
   printf("Enter the integers you want to store in array:\n");
   for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
   }
   int sum=0;
   for(int i=0;i<5;i++){
    sum=sum+arr[i];
   }
   printf("The sum of all elemets of array is %d",sum);

   return 0;
}

 

