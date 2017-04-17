#include<stdio.h>
#include<string.h>
void count(char *,int *,int *);
int main(){
	char a[100];
	printf("enter a string:");
	fgets(a,sizeof(a),stdin);
	int vow;
	int cons;
	
	count(a,&vow,&cons);
	
	printf("number of vowels is %d\n",vow);
	printf("number of constants is %d\n",cons);
	
	return 0;
}

void count(char a[],int *f,int *c){
	*f=*c=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
			*f=*f+1;
		else if(a[i]==' ');
		else
			*c=*c+1;;
	}
	*c=*c-1;
}
