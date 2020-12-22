#include<stdio.h>
int main()
{
	int n,i,flag=0,r,s=0;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		while(n!=0)
		{
			r=n%10;
			s=s*10+r;
			n/=10;
		}
		for(i=2;i<=s/2;i++)
		{
			if(s%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("the number is emirps prime");
		}
		else
		{
			printf("The number is not emirps prime");
		}
	}
	else
	{
		printf("The main value is not prime");
	}
}
