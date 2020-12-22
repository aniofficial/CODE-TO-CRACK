#include<stdio.h>
int main()
{
	int n,r,s,res=0,flag=0;
	scanf("%d",&n);
	res=n*n; 
	while(n!=0)
	{
		r=n%10; 
		n/=10;		
		s=res%10;	
		res/=10;	
		if(r!=s)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Automorphic");
	}
	else
	{
		printf("not Automorphic");
	}
	
	
}
