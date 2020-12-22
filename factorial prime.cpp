#include<stdio.h>
int factprime()
{
	int i,flag=0,N,fact=1,r=0;
	scanf("%d",&N);
	for(i=2;i<=N/2;i++)
	{
		if(N%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		fact=1;
		i=1;
		while(fact<=N+1)
			{
				fact=fact*i;
				if(N+1==fact || N-1==fact)
					return 1;
				i+=1;
			}
			 return 0;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int x=factprime();
	if(x==1)
	{
		printf("The number is factorial prime");
	}
	else
	{
		printf("The number is not factorial prime");
	}
}
