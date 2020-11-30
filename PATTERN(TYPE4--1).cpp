#include<stdio.h>
#include<conio.h>
int main(void)
{
	int i,j,space,h;
	scanf("%d",&h);
	for(i=1;i<=h;i++)
	{
		printf("\n");
		for(space=1;space<=h-i;space++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
	}
	return 0;
}
