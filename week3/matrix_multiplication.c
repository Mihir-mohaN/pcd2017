#include<stdio.h>

void get_matrix_row(int x,int y,double a[][y]);
void get_matrix_col(int x,int y,double a[][y]);
void display(int x,int y,double a[][y]);
void mat_mult(int a,int b,int c,int d,double x[][b],double y[][d],double z[][d]);

int main(){
	int a,b,c,d;
	
	printf("enter the number of rows and columns of the first matrix:");
	scanf("%d%d",&a,&b);
	
	double mat1[a][b];
	printf("enter elements of first matrix in row major order:");	
	get_matrix_row(a,b,mat1);
	
	printf("enter the number of rows and columns of the second matrix:");
	scanf("%d%d",&c,&d);
	
	double mat2[c][d];
	printf("enter elements of second matrix in column major order:");	
	get_matrix_col(c,d,mat2);
	
	printf("matrix 1:\n");
	display(a,b,mat1);
	printf("matrix 2:\n");
	display(c,d,mat2);
	
	if(b!=c){
		printf("matrix multiplication is not possible");
	}
	
	else{
		double mat_res[a][d];
		mat_mult(a,b,c,d,mat1,mat2,mat_res);
		printf("product matrix:\n");
		display(a,d,mat_res);
	}
	return 0;
}

void get_matrix_row(int x,int y,double mat[x][y]){
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			scanf("%lf",&mat[i][j]);
		}
	}
}

void get_matrix_col(int x,int y,double mat[x][y]){
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			scanf("%lf",&mat[j][i]);
		}
	}
}


void display(int x,int y,double mat[x][y]){
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			printf("%lf\t",mat[i][j]);
		}
		printf("\n");
	}
}

void mat_mult(int a,int b,int c,int d,double mat1[a][b],double mat2[c][d],double mat_res[a][d]){
	double sum=0;
	for(int i=0;i<a;i++){
		for(int j=0;j<d;j++){
			for(int k=0;k<c;k++){
				sum+=mat1[i][k]*mat2[k][j];
			}
			mat_res[i][j]=sum;
			sum=0;
		}
	}
}
