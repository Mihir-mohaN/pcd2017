#include<stdio.h>

void string_copy(char *,char *,int );

int main(){
	char a[10];
	int i;
	printf("enter string:");
	fgets(a,sizeof(a),stdin);
	for(i=0;a[i]!='\0';i++);
	char b[i];
	string_copy(a,b,i);
	printf("original string:\n");
	fputs(a,stdout);
	printf("copied string:\n");
	fputs(b,stdout);
	return 0;
}

void string_copy(char a[],char b[],int i){
	for(int k=0;k<i;k++)
		b[k]=a[k];
}
