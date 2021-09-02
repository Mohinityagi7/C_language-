/*Write a program to cheak whether a given number is prime or not using for loop*/
#include<stdio.h>

int main(){
    //A prime number (or a prime) is a natural number greater than
    // 1 that is not a product of two smaller natural numbers.
    //Disclimer: This is not the best method to solve this problem
    int n,i,m=0,flag=0;
    printf("Enter the number to check prime:");    
    scanf("%d",&n);   
    m=n/2;    
    for(i=2;i<=m;i++)    
    {    
        if(n%i==0)    
    {    
        printf("Number is not prime");    
        flag=1;    
        break;    
    }
    }    
    if(flag==0)    
    printf("Number is prime");     
    return 0;
}