#include<stdio.h>
#include<math.h>

void input(double *p,int deg);
double horner(int deg,double a[deg+1],double x);

int main(){
	int deg;
	double x;
	printf("enter the degree of the polynomial:");
	scanf("%d",&deg);
	printf("enter the value of x:");
	scanf("%lf",&x);
	
	double a[deg+1];
	input(&a[0],deg);
	printf("the sum is %lf",horner(deg,a,x));
	return 0;
}

void input(double *p,int deg){
	for(int i=deg;i>=0;i--){
		printf("enter the coefficient of x^%d:",i);
		scanf("%lf",(p+i));
	}
}

double horner(int deg,double a[deg+1],double x){
	double sum=0;
	for(int i=deg;i>=0;i--)
		sum+=a[i]*pow(x,i);
	return sum;
}
