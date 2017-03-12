#include<stdio.h>

int rev(int n){
	int a,b=0;
	while(n!=0){
		a=n%10;
		b=b*10+a;
		n/=10;
	}
	return b;
}

int main(){
	int n;
	printf("enter the number to be reversed:");
	scanf("%d",&n);
	int reversed=rev(n);
	printf("the reversed number is %d\n",reversed);
	
	if(reversed==n){
		printf("it is a palindrome");
	}
	else{
		printf("it is not a palindrome");
	}
	return 0;
}
