#include<stdio.h>
void get_matrix1(int a,int b,float mat1[a][b]);
void get_matrix2(int c,int d,float mat2[c][d]);
void display(int a,int b,int c,int d,float mat1[a][b],float mat2[c][d]);
void mat_mult(int a,int b,int c,int d,float mat1[a][b],float mat2[c][d]);
int main(){
	int a,b,c,d;
	printf("enter the number of rows and columns of the first matrix:");
	scanf("%d%d",&a,&b);
	float mat1[a][b];
	get_matrix1(a,b,mat1);
	printf("enter the number of rows and columns of the second matrix:");
	scanf("%d%d",&c,&d);
	float mat2[c][d];
	get_matrix2(c,d,mat2);
	display(a,b,c,d,mat1,mat2);
	if(b!=c){
		printf("matrix multiplication is not possible");
	}
	else{
	mat_mult(a,b,c,d,mat1,mat2);
	}
	return 0;
}

void mat_mult(int a,int b,int c,int d,float mat1[a][b],float mat2[c][d]){
	float mat3[a][d];
	int i,j,k;
	float sum=0;
	for(i=0;i<a;i++){
		for(j=0;j<d;j++){
			for(k=0;k<c;k++){
				sum+=mat1[i][k]*mat2[k][j];
			}
			mat3[i][j]=sum;
			sum=0;
		}
	}
	printf("result matrix:\n");
	for(i=0;i<a;i++){
		for(j=0;j<d;j++){
			printf("%f\t",mat3[i][j]);
		}
		printf("\n");
	}
}

void get_matrix1(int a,int b,float mat1[a][b]){
	int i,j;
	printf("enter elements of first matrix:");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%f",&mat1[i][j]);
		}
	}
}

void get_matrix2(int c,int d,float mat2[c][d]){
	int i,j;
	printf("enter elements of second matrix:");
	for(i=0;i<c;i++){
		for(j=0;j<d;j++){
			scanf("%f",&mat2[i][j]);
		}
	}
}

void display(int a,int b,int c,int d,float mat1[a][b],float mat2[c][d]){
	int i,j;
	printf("matrix 1:\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%f\t",mat1[i][j]);
		}
		printf("\n");
	}
	printf("matrix 2:\n");
	for(i=0;i<c;i++){
		for(j=0;j<d;j++){
			printf("%f\t",mat1[i][j]);
		}
		printf("\n");
	}
}
