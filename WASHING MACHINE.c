#include<stdio.h>
int main(void)
{
	int w,t;
	scanf("%d",&w);
	if(w==0)
	{
		t=0;
		printf("Time Estimated: %d Minutes",t);
	}
	else if(w>0 && w<=2000)
	{
		t=25;
		printf("Time Estimated: %d Minutes",t);
	}
	else if(w>2000 && w<=4000)
	{
		t=35;
		printf("Time Estimated: %d Minutes",t);
	}
	else if(w>4000 && w<=7000)
	{
		t=45;
		printf("Time Estimated: %d Minutes",t);
	}
	else if(w>7000)
	{
		printf("OVERLOADED!");
	}
	else
	{
		printf("INVALID INPUT");
	}
	return 0;
}
