#include <stdio.h>

int main(){
    int i = 72;
    int *j= &i;
    printf("The value of i is %d\n",i);
    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",j);
    printf("The value of address at j is %d",*(&i));
    
}
