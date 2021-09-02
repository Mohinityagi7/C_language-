/*Write a program to print multipication table of 10 in reverse order given number n*/
#include<stdio.h>

int main(){
    int i;
    printf("Multipication table in reverse order of 2\n");
    for(i=10;i;i--){
        printf("2 x %d = %d\n",i,i*2);
    }
    return 0;
}