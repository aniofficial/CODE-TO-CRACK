//no argument with return type of STRONG NUMBER
#include<stdio.h>
int strong()
{
	int n,temp,c,r,fact=1,s=0,flag=1;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		c=1;
		fact=1;
		while(c<=r)
		{
			fact=fact*c;
			c++;
		}
		s=s+fact;
		n/=10;
	}
	if(temp==s)
	{
		flag=1;
	}
	else
	{
		flag=0;
	}
	return flag;
}
int main(void)
{
	int x;
	x=strong();
	if(x==1)
	{
		printf("!!Its a strong number!!");
	}
	else
	{
		printf("!!Its not a strong number!!");
	}
	return 0;
}
