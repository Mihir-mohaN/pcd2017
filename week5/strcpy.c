#include<stdio.h>

void string_copy(char *,char *);

int main(){
	char a[100],b[100];
	printf("enter string:");
	fgets(a,100,stdin);
	string_copy(a,b);
	printf("original string:\n");
	fputs(a,stdout);
	printf("copied string:\n");
	fputs(b,stdout);
	return 0;
}

void string_copy(char a[],char b[]){
	int i;
	for(i=0;a[i]!='\0';i++)
		b[i]=a[i];
	b[i]='\0';
}
