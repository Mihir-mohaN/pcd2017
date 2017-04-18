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
	if(x==0||x==1) return 0;
	
	int flag=0;
	if(x%2==0&&x!=2) flag++;
	if(x%3==0&&x!=3) flag++;
	if(x%5==0&&x!=5) flag++;
	if(x%7==0&&x!=7) flag++;
	if(x%11==0&&x!=11) flag++;
	if(x%13==0&&x!=13) flag++;
	if(x%17==0&&x!=17) flag++;
	if(x%23==0&&x!=23) flag++;
	if(x%29==0&&x!=29) flag++;
	if(x%31==0&&x!=31) flag++;
	if(x%37==0&&x!=37) flag++;
	if(x%41==0&&x!=41) flag++;
	if(x%43==0&&x!=43) flag++;
	
	if(flag>0) return 0;
	else return 1;	
}
