#include<stdio.h>

int horner(int deg,int a[deg+1],int x);

int main(){
	int deg,x;
	printf("enter the degree of the polynomial:");
	scanf("%d",&deg);
	printf("enter the value of x:");
	scanf("%d",&x);
	
	int a[deg+1],i;
	for(i=deg;i>=0;i--){
		printf("enter the coefficient of x^%d:",i);
		scanf("%d",&a[i]);
	}
	 int sum=horner(deg,a,x);
	 printf("the sum is %d",sum);
	 return 0;
 }

int horner(int deg,int a[deg+1],int x){
	int i,sum=0;
	for(i=deg;i>0;i--){
		sum=(sum+a[i])*x;
	}
	sum+=a[0];
	return sum;
}
