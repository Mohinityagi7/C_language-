/* Write a program toprint natural numbers from 10 to 20 When initial loop counter is initialized to 0*/

#include<stdio.h>

int main(){
    int a=10;
    int b=20;
    while(a<=b){
        printf("The value of natural number :%d\n",a,b);
        a++; 
    }
    return 0;
}