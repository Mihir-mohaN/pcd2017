#include<stdio.h>
#include<string.h>
void count(char *,double *,int *);
int main(){
	char a[100];
	printf("enter a string:");
	fgets(a,sizeof(a),stdin);
	double freq;
	int cons;
	
	count(a,&freq,&cons);
	
	printf("frequency of vowels is %lf\n",freq);
	printf("number of constants is %d\n",cons);
	
	return 0;
}

void count(char a[],double *f,int *c){
	*f=*c=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
			*f=*f+1;
		else
			*c=*c+1;;
	}
	*f=*f/(strlen(a)-1);
	*c=*c-1;
}
