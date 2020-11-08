#include<stdio.h>
int main(void)
{
	int i,num,count=0;
	scanf("%d",&num);
	if(num>=100000 && num<1000000)
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				count=1;
				break;
			}	
		}
		if(count==1)
		{
			printf("Fake");
		}
		else
		{
			printf("Real");
		}
	}
	else
	{
		printf("Fake");
	}
	return 0;
}
