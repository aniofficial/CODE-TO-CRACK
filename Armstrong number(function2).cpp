// no argument  with return type  of ARMSTRONG NUMBER
#include<stdio.h>
#include<math.h>
int armstrong()
{
	int n,s=0,r,temp,c=0,a,flag=1;
	scanf("%d",&n);
	temp=n;
	a=n;
	while(a!=0)
	{
		a=a/10;
		c++;
	}
	while(n!=0)
	{
		r=n%10;
		s=s+pow(r,c);
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
	x=armstrong();
	
	if(x==1)
	{
		printf("!!This is armstrong number!!");
	}
	else
	{
		printf("!!This is not a armstrong number!!");
	}
	return 0;
}
