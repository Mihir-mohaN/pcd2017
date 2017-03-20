#include<stdio.h>
int rightshift(int x,int n);
int main(){
	int x,n;
	printf("enter the number:");
	scanf("%d",&x);
	printf("enter by how many positions you want to shift:");
	scanf("%d",&n);
	printf("%d\n",rightshift(x,n));
	return 0;
}
	
int rightshift(int x,int n){
	n=n%(sizeof(int)*8);
	int l=sizeof(int)*8-n;
	return x>>n|x<<l;
}
