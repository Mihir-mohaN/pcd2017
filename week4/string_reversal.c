#include<stdio.h>
#include<string.h>

void rev(char *p,int n,int j);

int main(){
        char inp[100];
        printf("enter the number you want to reverse:");        
	gets(inp);
        
	int n=strlen(inp)/2;                                    
	int j=strlen(inp)-1;
        
	rev(&inp[0],n,j);
        puts(inp);
        return 0;
}

void rev(char *p,int n,int j){

        for(int i=0;i<n;i++){
                char temp;
                temp=*(p+i);
                *(p+i)=*(p+j);;
                *(p+j)=temp;
                j--;
        }
}
