//Write a program with a function that tries to double the value of a number.
#include <stdio.h>

int doublevalue(int a);

int doublevalue(int a){
    a=a*2;
    return a;
}

int main(){
int b=27;
doublevalue(b);
printf("The value of b is %d.\n",b);
int c = doublevalue(b);
printf("The value of c is %d.",c);

}






