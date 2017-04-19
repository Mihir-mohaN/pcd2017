#include<stdio.h>

int factorial(int);

int main(){
	int n;
	printf("enter the number you want to find the factorial of:");
	scanf("%d",&n);
	int fact=factorial(n);
	printf("the factorial of %d is %d",n,fact);
	return 0;
}

int factorial(int n){
	if(n==0) return 1;
	return n*factorial(n-1);
}
