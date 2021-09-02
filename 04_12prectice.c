/*Repeat 8 using while loop*/
#include<stdio.h>

int main(){
    int i=0;   /* Don't forget to declare variables */
    while(i<8){  /* While i is less than 8 */
        printf("Repeat 8 using while loop %d\n",i);
        i++; /* Update i so the condition can be met eventually */
    }
    
    return 0;
}