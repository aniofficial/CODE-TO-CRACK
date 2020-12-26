#include<stdio.h>
int sumdigit(int n)
{
	int sum1=0,r;
	while(n!=0)
	{
		r=n%10;
		sum1=sum1+r;
		n/=10;
	}
	return sum1;
}
int primefact(int n)
{
	int i=2,sum2=0;
	while(n>1)
	{
		if(n%i==0)
		{
			sum2=sum2+sumdigit(i);
			n=n/i;
		}
		else
		{
			i++;
		}
	}
	return sum2;
}
int main()
{
	int n,a,b,i,flag=0;
	scanf("%d",&n);
	a=sumdigit(n);
	b=primefact(n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		if(a==b)
		{
			printf("Smith number");
		}
		else
		{
			printf("Not smith number");
		}
	}
	else
	{
		printf("its a prime number thats why its not smith");
	}
	return 0;
}

