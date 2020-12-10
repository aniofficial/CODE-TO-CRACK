#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n,i,j,sp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(sp=2;sp<2*(n-i)+1;sp++)
		{
			printf(" ");
		}
		if(i==n)
		printf("\b");
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
	}
	for(i=1;i<=n-1;i++)
	{
		printf("\n");
		for(j=n-1;j>=i;j--)
		{
			printf("*");
		}
		if(i==1)
		{
			printf(" ");
		}
		else
		{
			for(sp=2;sp<2*i+1;sp++)
			{
				printf(" ");
			}
		}
		for(j=n-1;j>=i;j--)
		{
			printf("*");
		}
	}
}
