#include <stdio.h>
#include <math.h>

typedef struct{
	float real,imaginary;
}complex;

void findroots(float a,float b,float c,complex *r1,complex *r2);

int main(){
	float a,b,c;
	complex root1,root2;
	printf("enter the coefficients of x^2, x and the constants:");
	scanf("%f%f%f",&a,&b,&c);
	findroots(a,b,c,&root1,&root2);
	printf("the roots of the quadratic equation are: %f + i %f and %f -i%f",root1.real,root1.imaginary,root2.real,root2.imaginary);
	return 0;
	}

void findroots(float a,float b,float c,complex *r1,complex *r2){
	float d=b*b-4*a*c;
    	if(d==0){
    		r1->real=r2->real=(-b/(2*a));
    		r1->imaginary=r2->imaginary=0;
    	}

	else if(d>0){
		r1->real=(-b+sqrt(d))/(2*a);
		r2->real=(-b-sqrt(d))/(2*a);
		r1->imaginary=r2->imaginary=0;
   	}

	else if(d<0){
    		r1->real=r2->real=(-b/(2*a));
		r1->imaginary=r2->imaginary=(sqrt(-d))/(2*a);
    	}
}
