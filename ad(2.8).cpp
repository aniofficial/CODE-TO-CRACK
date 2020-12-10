#include<stdio.h>
#include<conio.h>
int main(void)
{
	int  n,i,j,sp;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("\n");
		for(j=n;j>=i;j--)
		{
			printf("%d",i);
		}
		for(sp=1;sp<2*(i-1);sp++)
		{
			printf(" ");
		}
		if(i==1)
		printf("\b");
		for(j=n;j>=i;j--)
		{
			printf("%d",i);
		}
	}
	for(i=1;i<=n-1;i++)
	{
		printf("\n");
		for(j=n-1;j>=i;j--)
		{
			printf("%d",i+1);
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
			printf("%d",i+1);
		}
	}
}
