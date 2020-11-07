#include<stdio.h>
int main(void)
{
	int n,d,total;
	float cost;
	scanf("%d %d",&n,&d);
	if(n>=5 && n<=20 && d>=0 && d<=10)
	{
		total=n*d*5-(13*d);
	}
     if(total>850)
	{
		cost=total*5;
	}
	else if(total>200)
	{
		cost=total*5.50;
	}
	else if(total<200)
	{
		cost=total*6;
	}
	printf("%.1f",cost);
	return 0;
}
