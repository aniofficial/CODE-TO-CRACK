//with argument with return type of ARMSTRONG NUMBER
#include<stdio.h>
#include<math.h>
int armstrong(int x)
{
	int s=0,r,temp,c=0,a,flag=1;
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
	int n,f;
	scanf("%d",&n);
	f=armstrong(n);
	if(f==1)
	{
		printf("!!This is armstrong number!!");
	}
	else
	{
		printf("!!This is not a armstrong number!!");
	}
	return 0;
}
