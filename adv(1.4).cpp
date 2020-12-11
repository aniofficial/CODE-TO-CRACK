#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		printf("\n");
		for(j=1;j<=2*n-1;j++)
		{
			if(i==j || j==((2*n-1)-i+1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
	}
	return 0;
}
