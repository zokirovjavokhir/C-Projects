#include <stdio.h>
void Multiply(int A[100][100],int B[100][100],int size){
int C[100][100] = {0};
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			for(int k=0; k<size; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
		}
	}
}


	for(int i=0; i<size; i++) {
		for(int j=0; j<size; j++)
		{
			printf("%d ", C[i][j]);
	}
		printf("\n");
}

}


int main() {
	int A[100][100]={0,};
	int B[100][100]={0,};
	int N;

	printf("Enter N: ");
	scanf("%d",&N);
	
	printf("Enter the first matrix: \n");
	for(int i = 0; i<N;i++)
	{
		printf("Row (%d): ", i);
		for(int j = 0; j<N;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("Enter the second matrix: \n");
	for(int i = 0; i<N;i++)
	{
		printf("Row (%d): ", i);
		for(int j = 0; j<N;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	Multiply(A,B,N);
	return 0;
}