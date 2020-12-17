//no argument with no return type of ARMSTRONG NUMBER
#include<stdio.h>
#include<math.h>
void armstrong()
{
	int s=0,r,n,temp,c=0,a;
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
		printf("!!This is armstrong number!!");
	}
	else
	{
		printf("!!This is not a armstrong number!!");
	}
}
int main(void)
{
	armstrong();
	return 0;
}
