#include<stdio.h>
void sort(int n,float a[n]);
int main(){
	int n;
	printf("enter how many numbers you want to sort:");
	scanf("%d",&n);
	float a[n];
	getval(n,a);
	sort(n,a);
	return 0;
}

void getval(int n,float a[n]){
	int i;
	for(i=0;i<n;i++){
		int j=i+1;
		printf("enter %d number:",j);
		scanf("%f",&a[i]);
	}
}
void sort(int n,float a[n]){
	int k,i;
	float x;
	for(k=0;k<n;k++){
		for(i=0;i<(n-1);i++){
			if(a[i]>a[i+1]){
				x=a[i];
				a[i]=a[i+1];
				a[i+1]=x;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%f\t",a[i]);
	}
}
