#include<stdio.h>
int prime(int n)
{
	int i,flag=1;
	for(i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;	
		}	
	}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
		int x,i,j,prev,next,a;
		scanf("%d",&x);
		prime(x);
		for(i=x-1,j=x+1;i>2;i--,j++)
		{
			if(prime(i)==1)
			{
				if(prime(j)==1)
				{
					prev=i;
					next=j;	
				}
				else
					break;
			}
			if(prime(j)==1)
			{
				if(prime(i)==1)
				{
					prev=i;
					next=j;	
				}
				else
					break;
			}
			
		}
		printf("The previous element is:-----%d",prev);
		printf("The next element is :--------%d",next);
		printf("\n");
		if( (x==(prev+next)/2))
					{
						printf("the number is balanced prime");
					}
					else
					{
						printf("the number is not balanced prime");
					}
}
