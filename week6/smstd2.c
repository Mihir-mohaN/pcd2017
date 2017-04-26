#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double sum(int,double *);
double std(int,double *,double);


int main(){
	double *a;
	int n;
	printf("enter how many numbers you want to compute on:");
	scanf("%d",&n);
	a=(double *)malloc(n);
	for(int i=0;i<n;i++){
		printf("enter number %d:",i+1);
		scanf("%lf",(a+i));
	}
	printf("the sum is %lf\n",sum(n,a));
	double mean=sum(n,a)/n;
	printf("the mean is %lf\n",mean);
	printf("the standard deviation is %lf\n",std(n,a,mean));
	return 0;
}

double sum(int n,double *a){
	double sum=0;
	for(int i=0;i<n;i++)
		sum+=*(a+i);
	return sum;
}

double std(int n,double *a,double m){
	double sum=0;
	for(int i=0;i<n;i++)
		sum+=pow((*(a+i)-m),2);
	return sqrt(sum/n);
}
