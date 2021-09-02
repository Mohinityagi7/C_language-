/* Write a program to sum first 10 natural uaing while loop */
#include<stdio.h>

int main(){
    int i=1,sum=0,n=10;
    // for(i=0;i<=n;i++){
    //     sum += i;
    // }

    // while(i<=n){
    //     sum += i;
    //     i++;
    // }

    do{
        printf("THE VALUE OF SUM (1 to 10) %d\n",sum);
        sum +=i;
        i++;
        
    }while(i<=n);



    // printf("THE VALUE OF SUM (1 to 10) %d\n",sum);
    
    return 0;
}