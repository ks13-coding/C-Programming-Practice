 /*
Problem:
Write a C program to input 5 integers into an array.
Then ask the user to enter a number to search.
Check if the number is present in the array or not.*/
#include<stdio.h>
int main(){
    int array[5]={1,7,10,18,45};
    int key;
    printf("Hey! Please enter a number to search for in array:");
    scanf("%d",&key);
    int found=0;
    for(int i=0;i<5;i++){
        if(array[i]==key){
            printf("The number %d is found at index %d.",key,i);
            found=1;
            break;
        }
    }
    
    if(found==0){
        printf("Sorry.The number %d is not found.",key);
    }
    return 0;
}

