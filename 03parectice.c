/*Wite a program to convert  celsius (centigrade degrees temperture to farenheit*/
#include<stdio.h>

int main(){
    float celsius = 37,far;
    far = (celsius * 9/5) + 32;
    printf("The value of this celsius temperature in fahrenheit is %f",far);
    return 0;
} 