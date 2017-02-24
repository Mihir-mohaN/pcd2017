//comparison of 3 numbers

#include<stdio.h>
float comp(float a,float b,float c){
	float max=a;
	if(max<b){
		max=b;
	}
	if(max<c){
		max=c;
	}
	return max;
}

int main(){
	float a,b,c;
	printf("enter three numbers:");
	scanf("%f%f%f",&a,&b,&c);
	float x=comp(a,b,c);
	printf("the largest number is:%f",x);
  return 0;
}
