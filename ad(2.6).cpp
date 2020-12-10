#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n,i,j,sp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=n;j>=i;j--)
		{
			printf("*");
		}
		for(sp=2;sp<2*i-1;sp++)
		{
			printf(" ");
		}
		if(i==1)
		printf("\b");
		for(j=n;j>=i;j--)
		{
			printf("*");
		}		
	}
	for(i=n-1;i>=1;i--)
	{
		printf("\n");
		for(j=n;j>=i;j--)
		{
			printf("*");
		}
		for(sp=1;sp<=2*(i-1)-1;sp++)
		{
			printf(" ");
		}
		if(i==1)
		printf("\b");
		for(j=n;j>=i;j--)
		{
			printf("*");
		}
	}
}
