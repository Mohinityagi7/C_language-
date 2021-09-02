/* write a program to print first n natural number in reverse order using for loop*/
#include<stdio.h>

int main(){
    int i,n;
    
    printf("Enter the value of n : \n");
    scanf("%d", &n);

    printf("first n natural number in reverse order %d : \n",n);

    for(i=n;i;i--){
        printf("%d\n",i);
    }
    return 0;
}