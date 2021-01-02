#include<stdio.h>
int main(void)
{
	int x[6],i;
	for(i=0;i<6;i++)
	{
		printf("Enter a value:-----");
		scanf("%d",&x[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("\nx[%d]=%d and the address is %u",i,x[i],&x[i]);
	}
	printf("\nThe base address is:---> %u ",x);
	return 0;
}
