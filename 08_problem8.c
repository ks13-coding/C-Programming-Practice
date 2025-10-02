/*
Problem:
Write a C program with a hardcoded array of 8 integers:
{5, 7, 5, 9, 5, 2, 7, 5}

Ask the user to enter a number to search.
Print how many times that number occurs in the array.*/
#include<stdio.h>
int main(){
    int array[]={5, 7, 5, 9, 5, 2, 7, 5};
    int key;
    printf("Pease enter a number to check it's occurence:");
    scanf("%d",&key);
    int count=0;
    for(int i=0;i<8;i++){
        if (array[i]==key){
            count++;
        }
    }
    if(count>0){
        printf("The number %d occurs %d times in the array.",key,count);
    }
    else{
        printf("The number does not exists in the array");
    }
    return 0;
    }