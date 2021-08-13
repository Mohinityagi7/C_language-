//Write a program to find out whether a student is pass or fail ; 
//if it requires total 40% and at least 33% in each subject to pass assume 
//3 subjects and take marks as an input from the user
#include<stdio.h>

int main(){
    int physics, chemisty,maths, total;
    printf("Enter physics marks\n");
    scanf("%d",&physics);
    printf("Enter chemisty marks\n");
    scanf("%d",& chemisty);
    printf("Enter maths marks\n");
    scanf("%d",&maths);
    total = (physics + chemisty + maths)/3;
    if((total<40) || physics<33 || maths<33 || chemisty<33){
        printf("Your total percentage is %d and you are fail\n", total);
    }
    else{
        printf("Your total percentage is %d and you are pass\n", total);
    }
    return 0;
}