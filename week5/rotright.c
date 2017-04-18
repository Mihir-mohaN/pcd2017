#include<stdio.h>

int rotate_right(int,int);

int main(){
	int x,n;
	printf("enter a number:");
	scanf("%d",&x);
	printf("enter by how many positions you want to shift right:");
	scanf("%d",&n);
	printf("the result is %d",rotate_right(x,n));
	return 0;
}

int rotate_right(int x,int n){
	int a=sizeof(x)*8;
	int result=x>>n|x<<(a-n);
	return result;
}
