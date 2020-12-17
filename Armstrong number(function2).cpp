// no argument  with return type  of ARMSTRONG NUMBER
#include<stdio.h>
#include<math.h>
int armstrong()
{
	int n;
	scanf("%d",&n);
	return n;
}
int main(void)
{
	int x,s=0,r,temp,c=0,a;
	x=armstrong();
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
	return 0;
}
