#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n)
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
