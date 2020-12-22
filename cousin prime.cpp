#include<stdio.h>
int prime(int n)
{
	int i,flag=0;
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
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int x;
	scanf("%d",&x);
	prime(x);
	if((prime(x+4)==1) && (prime(x-4)==1))
	{
		printf("The number is cousin prime");
	}
	else
	{
		printf("The number is not cousin prime");
	}
}
