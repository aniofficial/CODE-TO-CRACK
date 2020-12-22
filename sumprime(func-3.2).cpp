//with argument no return type of SUM OF 1ST 10 PRIME NUMBERS(call by ref)
#include<stdio.h>
int sumprime(int *a)
{
	int i,j,flag,sum=0;
	for(i=2;i<=*a;i++)
	{
		flag=1;
		for(j=2;j<=i/2;j++)
		{ 
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			sum=sum+i;
		}
	}
	printf("the sum of  prime numbers:---->%d",sum);	
}
int main(void)
{
	int x;
	printf("enter the range from 1 to:----->");
	scanf("%d",&x);
	sumprime(&x);
	return 0;
}

