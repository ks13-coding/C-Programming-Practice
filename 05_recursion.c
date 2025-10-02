/*#include <stdio.h>

int factorial(int);
    // Factorial(5) = 1 X 2 X 3 X 4 X 5
    // Factorial(4) = 1 X 2 X 3 X 4
    // Factorial(3) = 1 X 2 X 3
    // Factorial(n) = 1 x 2 X 3 X .... X n-1 X n
    //  = 1 x 2 X 3 X .... X n-1

int factorial(int n){ 
    if(n == 1 || n == 0){ // Base condition
        return 1;
    }
    // Factorial(n) = Factorial(n-1) X n
    return n * factorial(n-1);
}

int main(){
    int a = 6;
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}*/


#include <stdio.h>

int factorial(int);

int factorial(int n){
    if (n<0){
        printf("The factorial of negative number does not exists :D");
        return 0;
    }
        if (n==1 || n==0){
            return 1;
        }
        return n * factorial(n-1);
    }

    int main(){
    int a;
    printf("Enter your number please:");
    scanf("%d",&a);
    if (a>=0){
    printf("The factorial of %d is %d", a, factorial(a));
    }
    else{
        factorial(a);
    }
    return 0;
}






