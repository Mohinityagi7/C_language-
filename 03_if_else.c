//relational operator in c
#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    //if (age!=90){
    if (age>=90){
        printf("You are above 90, you cannot drive\n");
    }
    else {
        printf("You can drive");
    }

    if(age==50){   // important note:- "=" is used  for assigment  where as "==" is used for equality check.
        printf("Half Century\n");
    }

    
    return 0;
}