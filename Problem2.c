#include <stdio.h>

int main()
{
	int A[7], B[7], C[7];
	int i;
	
	for(i=0;i<7;i++)
	{
		printf("Province A, Day %d: ",i+1);
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<7;i++)
	{
		printf("Province B, Day %d: ",i+1);
		scanf("%d",&B[i]);
	}
	
	for(i=0;i<7;i++)
	{
		printf("Province C, Day %d: ",i+1);
		scanf("%d",&C[i]);
	}
	
	printf("\n");
	
	for(i=0;i<7;i++)
	{
		printf("Province A, Day %d= %d\n",i+1,A[i]);
	}
	
	for(i=0;i<7;i++)
	{
		printf("Province B, Day %d= %d\n",i+1,B[i]);
	}
	
	for(i=0;i<7;i++)
	{
		printf("Province C, Day %d= %d\n",i+1,C[i]);
	}
	
	return 0;
}
