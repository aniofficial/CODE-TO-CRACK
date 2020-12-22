#include<stdio.h>
int main()
{
	int n,flag=0,i;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		flag=0;
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		int r,s=0;
		while(n!=0)
		{
			r=n%10;
			s=s+r;
			n/=10;
		}
		for(i=2;i<=s/2;i++)
		{
			flag=0;
			if(s%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("this is additive prime");
		}
		else
		{
			printf("This is not additive prime");
		}
	}
	else
	{
		printf("NOT PRIME");
	}
}
