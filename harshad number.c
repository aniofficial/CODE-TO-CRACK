#include<stdio.h>
int sumdigit(int n)
{
	int i,r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n/=10;
	}
	return sum;
}
int main(void)
{
	int n,a;
	scanf("%d",&n);
	a=sumdigit(n);
	if(n%a==0)
	{
		printf("The number is HARSHAD NUMBER");
	}
	else
	{
		printf("The number is not HARSHAD NUMBER");
	}
	return 0;
}
