#include<stdio.h>
#include<math.h>
double newt_sqrt(double );

int main(){
	double n;
	printf("enter the number:");
	scanf("%lf",&n);
	double result=newt_sqrt(n);
	printf("the square root of the number is %lf",result);
	return 0;
}

double newt_sqrt(double n){
	double diff,prev;
	double x=10;
	do{
		prev=x;
		x=x-((x*x-n)/(2*x));
		diff=fabs(prev-x);
	}while(diff>0.000001);
	return x;
}
