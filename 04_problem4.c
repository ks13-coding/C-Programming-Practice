 /*
Problem:
Write a C program to input 5 integers into an array.
Then find and print the minimum element in the array.
*/
#include<stdio.h>
int main(){
    int arr[5];
   printf("Enter the integers you want to store in array:\n");
   for(int i=0;i<5;i++){
    
    scanf("%d",&arr[i]);
   }
   int min=arr[0];
   for(int i=1;i<5;i++){
    if(arr[i]<min){
       min=arr[i];
    }
}
    printf("The minimum element in the array is %d\n",min);
}
  

