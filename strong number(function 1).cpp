//no argument no return type of STRONG NUMBER
#include<stdio.h>
void strong()
{
	int n,temp,c,r,fact=1,s=0;
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
		printf("!!Its a strong number!!");
	}
	else
	{
		printf("!!Its not a strong number!!");
	}
}
int main(void)
{
	strong();
	return 0;
}
