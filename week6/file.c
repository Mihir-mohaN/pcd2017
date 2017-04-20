#include<stdio.h>
int main(){
	char stna[100],usn[10],op[100];
	FILE *stud_name=fopen("studentname.txt","r");
	FILE *usnum=fopen("usn.txt","r");
	FILE *o_p=fopen("output.txt","w+");
	
	fgets(stna,sizeof(stna),stud_name);
	fgets(usn,sizeof(usn),usnum);
	
	fputs(stna,o_p);
	fputs(usn,o_p);
	
	while(fgets(op,sizeof(op),o_p)!=NULL)
		puts(op);
	
	return 0;
}
