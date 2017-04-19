#include<stdio.h>

int fact(int);
int bin_coeff(int,int);

int main(){
	int n,r;
	printf("enter the n and r of nCr:");
	scanf("%d%d",&n,&r);
	printf("%dC%d = %d",n,r,bin_coeff(n,r));
	return 0;
}

int fact(int n){
	if(n==0) return 1;
	return n*fact(n-1);
}

int bin_coeff(int n,int r){
	int bc=fact(n)/(fact(n-r)*fact(r));
	return bc;
}
