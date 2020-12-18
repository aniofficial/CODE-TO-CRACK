//with argument with return type of STRONG NUMBER
#include<stdio.h>
int strong(int a)
{
	int temp,c,r,fact=1,s=0,flag=1;
	temp=a;
	while(a!=0)
	{
		r=a%10;
		c=1;
		fact=1;
		while(c<=r)
		{
			fact=fact*c;
			c++;
		}
		s=s+fact;
		a/=10;
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
	int n,x;
	scanf("%d",&n);
	x=strong(n);
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
