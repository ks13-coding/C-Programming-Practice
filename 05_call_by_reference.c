#include <stdio.h>

int sum(int*,int*);

int sum(int* a,int* b){
    *a=6;
    *b=5;
    return *a+*b;

}
int main(){
    int a=12,b=7;
    printf("The sum is %d\n",sum(&a,&b));
    printf("The value of a is %d\n",a);
    printf("The value of b is %d",b);

}


