/*sum of two complex numbers*/
#include <stdio.h>
typedef struct{
    float real;
    float imaginary;
}complex;
 main(){
     complex number;
     float a,b,c,d;
     printf("enter real and imaginary part of first complex number: \n");
     scanf("%f%f",&a,&b);
     
     printf("enter real and imaginary part of second complex number: \n");
     scanf("%f%f",&c,&d);
     
    number.real=a+c;
    number.imaginary=b+d;
     
     printf("sum of the two complex numbers is:%f+i%f",number.real,number.imaginary);
 }
