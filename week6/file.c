#include<stdio.h>
#include<string.h>
int main(){
	char stna[100],usn[10],op[100];
	FILE *stud_name=fopen("studentname.txt","r");
	FILE *usnum=fopen("usn.txt","r");
	FILE *o_p=fopen("output.txt","w");
	
	while(!feof(stud_name)&&!feof(usnum)){
	fgets(stna,sizeof(stna),stud_name);
	fgets(usn,sizeof(usn),usnum);
		size_t sn= strlen(stna)-1;
		if (stna[sn] == '\n')
		stna[sn] = '\0';
	
		size_t un= strlen(usn)-1;
		if (usn[un] == '\n')
		usn[un] = '\0';
	fprintf(o_p,"%s10%s\n",stna,usn);
	}
	
	fclose(stud_name);
    fclose(usnum);
    fclose(o_p);
    
	o_p=fopen("output.txt","r");
	
	while(!feof(o_p)){
	fgets(op,sizeof(op),o_p);
	fputs(op,stdout);
	}
	
	return 0;
}
