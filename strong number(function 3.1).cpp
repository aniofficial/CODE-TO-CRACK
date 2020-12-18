//with argument no return type of STRONG NUMBER(call by value)
#include<stdio.h>
int strong(int a)
{
	int temp,c,r,fact=1,s=0;
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
		printf("!!Its a strong number!!");
	}
	else
	{
		printf("!!Its not a strong number!!");
	}
}
int main(void)
{
	int n;
	scanf("%d",&n);
	strong(n);
	return 0;
}
