#include<stdio.h>
#include<math.h>
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
int semiprime(int n)
{
	int  i,c=0;
	for (int i = 2;i<=sqrt(n)+1;i++)
	{ 
        while (n % i == 0) 
        {
            n /= i,
            c++;
		}
		if(c>=2)
			break;
	}
	if(n>1)
		c++;
    return  2; 
}  
int chenprime(int n)
{
	if(prime(n)==1)
	{
		if(semiprime(n+2)==2 || prime(n+2)==1)
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	if(chenprime(n)==1)
	{
		printf("This is chenprime");
	}
	else
	{
		printf("This is not chenprime");
	}
}
