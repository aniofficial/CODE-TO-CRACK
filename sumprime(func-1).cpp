//no argument no return type of SUM OF 1ST 10 PRIME NUMBERS
#include<stdio.h>
void sumprime()
{
	int n,i,j,flag,sum=0;
	printf("enter the range from 1 to:----->");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
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
	sumprime();
	return 0;
}

