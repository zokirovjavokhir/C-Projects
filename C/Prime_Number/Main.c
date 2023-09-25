#include<stdio.h>

int main()
{
	int M,N;
	int cnt = 0;
	printf("Enter the value of M: ");
	scanf("%d",&M);
	printf("Enter the value of N: ");
	scanf("%d",&N);
	int prime = 0;
	int divisor;
for (; M <= N; M++) {

for (divisor = 2; divisor < M; divisor++) {
   if (M % divisor == 0) {
   break;
}
}
  if (divisor == M) {
  printf("%d ", M);
  prime = 1;
}
}
if (!prime){
  printf("None");
}
return 0;
}
