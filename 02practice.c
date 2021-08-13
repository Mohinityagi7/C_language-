/*Calculate  the area of a circle(pi*r*r) and modify the same program to calculate the 
volume of a cylinder give its radius and hight*/
#include<stdio.h>

int main(){
    int radius = 5;
    float pi =3.14;
    printf("The area of a circle is %f\n",pi*radius*radius); //end the area of circle
    int hight = 3;    // start volume of cylinder
    printf("Volume of a cylinder is %f\n",pi*radius*radius*hight);
    
    return 0;
}