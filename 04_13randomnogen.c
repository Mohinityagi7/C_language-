#include<stdio.h>  
#include<stdlib.h>   //Import the library to random number to generated
#include<time.h>    // include the header files.

int main(){
    int number,guess,nguesses=1;
    srand(time(0)); // initilaiz seconds mai time return karta h almost different time return th number value will be different
    number=rand()%100+1;  //Generates a random number between 1 and 100. 
    printf("The number is %d",number);

    return 0;
}

