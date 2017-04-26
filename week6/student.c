#include<stdio.h>
#include<string.h>

typedef struct{
	int roll,marks;
	char name[20],grade[2];
}student;

void input(int,student *);
int search(int,student *,char *);

int main(){
	student s[100];
	int n;
	printf("enter how many students:");
	scanf("%d",&n);
	input(n,s);
	
	while(1){
		char sname[20];
		printf("enter the name you want to search for:");
		scanf("%s",sname);
		
		if(search(n,s,sname)!=0)
			printf("the marks is %d\n",s[search(n,s,sname)].marks);
		else
			printf("not found\n");
	}
	return 0;
}

void input(int n,student *s){
	for(int i=1;i<=n;i++){
		printf("enter the roll, name, marks and grade of student %d:",i);
		scanf("%d%s%d%s",&s[i].roll,s[i].name,&s[i].marks,s[i].grade);
	}
}

int search(int n,student *s,char sname[]){
	for(int i=1;i<=n;i++){
		if(strcmp(s[i].name,sname)==0)
			return i;
	}
	return 0;
}
