/*Write a program to calculate simple interest for a set of values representing principal, 
no of years and rate of interest*/
#include<stdio.h>

int main(){
    int p=1000,r=4,t=5;
    int si= (p*r*t/100);
    printf("the sum of simple interest %d",si);
    return 0;
}