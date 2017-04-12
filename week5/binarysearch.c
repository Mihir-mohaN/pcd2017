#include<stdio.h>
#include<string.h>

void sort(int ,char a[][100]);

int main(){
	int n;
	printf("enter how many names you want to enter:");
	scanf("%d",&n);
	char names[n][100];
	printf("enter the names:");
	for(int i=0;i<=n;i++)
		gets(names[i]);
		
	for(int i=0;i<=n;i++)
		puts(names[i]);
	
	sort(n,names);
	
	printf("enter the name you want to search for:");
	gets(target);
	
	for(int i=0;i<=n;i++)
		puts(names[i]);

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
