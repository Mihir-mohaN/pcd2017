#include<stdio.h>
#include<string.h>

void sort(int ,char a[][100]);
int search(int ,char a[][100],char b[]);

int main(){
	int n;
	printf("enter how many names you want to enter:");
	scanf("%d",&n);
	char names[n][100];
	printf("enter the names:\n");
	for(int i=0;i<=n;i++)
		fgets(names[i],sizeof(names[i]),stdin);
		
	sort(n,names);
	
	printf("\nlist of names:");
	for(int i=0;i<=n;i++)
		puts(names[i]);
	
	char target[100];
	printf("enter the name you want to search for:");
	fgets(target,sizeof(target),stdin);
	
	int x=search(n,names,target);
	if(x==0)
		printf("%s not found",target);
	else
		printf("it is the %d name",x);
	return 0;
}

void sort(int n, char a[n][100]){
	char temp[100];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n-i-1;j++){
			if(strcmp(a[j],a[j+1])>0){
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
	}
}

int search(int n,char a[n][100],char b[100]){
	int low=0,high=n,mid;
	do{
		mid=(low+high)/2;
		if(strcmp(b,a[mid])<0)
			high=mid-1;
		else
			low=mid+1;	
	}while(strcmp(b,a[mid])!=0 && low<=high);
	
	if(strcmp(b,a[mid])==0)
		return mid;
	
	else
		return 0;
}
