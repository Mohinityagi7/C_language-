/* Write a program to print first n natural number using do-while loop:
input: 4
output: 1 2 3 4
*/
#include<stdio.h>

int main(){
    int i=1;

    do{
        printf("The first n natural number %d\n",i);
        i++;
    }while(i<=4);
    return 0;
}
        