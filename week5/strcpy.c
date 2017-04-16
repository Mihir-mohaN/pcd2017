#include<stdio.h>
#include<string.h>

void string_copy(char a[],char b[]);

int main(){
	char a[10];
	printf("enter string:");
	fgets(a,sizeof(a),stdin);
	char b[strlen(a)-1];
	string_copy(a,b);
	printf("original string:");
	fputs(a,stdout);
	printf("copied string:");
	fputs(b,stdout);
	return 0;
}

void string_copy(char a[],char b[]){
	int x=strlen(a);
	for(int i=0;i<x;i++)
		b[i]=a[i];
}
