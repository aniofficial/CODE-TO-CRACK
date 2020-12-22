#include<stdio.h>
#include<math.h>
int main()
	{
		int n,r,s=0,t,c=0,a;
		scanf("%d",&n);
		t=n;
		a=n;
		while(a!=0)
		{
			a/=10;
			c++;
		}
		while(n!=0)
		{
			r=n%10;
			s=s+pow(r,c);
			n/=10;
			c--;
		}
		if(t==s)
		{
			printf("The number is disarium number");
		}
		else
		{
			printf("The number is not disarium number");
		}
	}

