#include<stdio.h>
int isprime(int);
int main(){
	int num;
	printf("enter a number to check whether it is prime:");
	scanf("%d",&num);
	if(isprime(num))
		printf("%d is prime",num);
	else
		printf("%d is not prime",num);
	return 0;
}

int isprime(int x){
	if(x%2==0||x%3==0||x%5==0||x%7==0)
		return 0;
	else
		return 1;
}
