#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n,i,j,sp;
	scanf("%d",&n);
	for(i=n;i>=n/2;i--)
	{
		printf("\n");
		for(sp=0;sp<n-i;sp++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		for(j=2;j<=i;j++)
		{
			printf("%d",j);
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(sp=1;sp<=n-i;sp++)
		{
			printf(" ");	
		}
		for(j=i;j>1;j--)
		{
			printf("%d",j);
	    }
	    for(j=1;j<=i;j++)
	    {
	    	printf("%d",j);
		}
	}
   return 0;
}
