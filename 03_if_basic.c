// C program to check whether a number is even or odd.8
#include<stdio.h>

int main(){
    int a, b;
    printf("Enter a number \n");
    scanf("%d", &a);

    if(a%2==0){
        printf("%d is even\n",a);  // if condition are true will be executed and condition are false they are not execute
                                   //otherwise (else part will be execute),

    }
    else{   //optional condition
        printf("%d is odd\n" ,a);
    }
    return 0;
}