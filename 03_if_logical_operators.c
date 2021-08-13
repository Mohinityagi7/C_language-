//if logical operator in c
#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    //if (age!=90){
    if (age<= 70 && age>=18){
        printf("You are above 18 and below 70, you cannot drive\n");
    }
    else {
        printf("You can't drive");
    }

    if(age==50){   // important note:- "=" is used  for assigment  where as "==" is used for equality check.
        printf("Half Century\n");
    }

    
    return 0;
}