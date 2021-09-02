/*Write a program to calculate the factoreal of a given number using  a for loop*/
#include<stdio.h>

int main(){
    int i, n=4, factorial=1;
    for(i=1;i<=n;i++){
        factorial*=i;
    }
    printf("The value of factorial %d is %d",n,factorial);
    
    return 0;
}