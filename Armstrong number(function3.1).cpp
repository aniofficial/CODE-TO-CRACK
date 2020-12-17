//with argument no return type of ARMSTRONG NUMBER(using call by value)
#include<stdio.h>
#include<math.h>
void armstrong(int x)
{
	int s=0,r,temp,c=0,a;
	temp=x;
	a=x;
	while(a!=0)
	{
		a=a/10;
		c++;
	}
	while(x!=0)
	{
		r=x%10;
		s=s+pow(r,c);
		x/=10;
	}
	if(temp==s)
	{
		printf("!!This is armstrong number!!");
	}
	else
	{
		printf("!!This is not a armstrong number!!");
	}
}
int main(void)
{
	int n;
	scanf("%d",&n);
	armstrong(n);
	return 0;
}
