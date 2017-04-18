#include<stdio.h>

void string_cat(char a[],char b[],char c[]);

int main(){
	char first_name[20],sec_name[20];
	printf("enter first name:");
	fgets(first_name,sizeof(first_name),stdin);
	printf("enter last name:");
	fgets(sec_name,sizeof(sec_name),stdin);
	
	char full_name[40];
	string_cat(first_name,sec_name,full_name);
	printf("full name:");	
	fputs(full_name,stdout);
	return 0;
}

void string_cat(char fir_n[],char sec_n[],char full_n[]){
	int z,y,i;
	for(y=0;fir_n[y]!='\0';y++);
	for(i=0;sec_n[i]!='\0';i++);

	for(z=0;z<y-1;z++)
		full_n[z]=fir_n[z];
		
	full_n[z]=' ';
	z++;
	
	for(int j=0;j<i;j++){
		full_n[z]=sec_n[j];
		z++;
	}
	full_n[z]='\0';
}
