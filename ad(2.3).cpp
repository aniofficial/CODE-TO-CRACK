#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n,i,j,sp;
	scanf("%d",&n);
	for(i=n;i>=2;i--)
	{
		printf("\n");
		for(sp=0;sp<n-i;sp++)
		{
			printf("%d",i);
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		for(j=2;j<=i;j++)
		{
			printf("%d",j);
		}
		for(sp=0;sp<n-i;sp++)
		{
			printf("%d",i);
		}
		
		
	}
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(sp=1;sp<=n-i;sp++)
		{
			printf("%d",i);	
		}
		for(j=i;j>1;j--)
		{
			printf("%d",j);
	    }
	    for(j=1;j<=i;j++)
	    {
	    	printf("%d",j);
		}
			for(sp=1;sp<=n-i;sp++)
		{
			printf("%d",i);	
		}
	
	}
   return 0;
}
