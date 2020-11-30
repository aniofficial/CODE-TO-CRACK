#include<stdio.h>
#include<conio.h>
int main(void)
{
	int i,j,space,h;
	scanf("%d",&h);
	for(i=1;i<=h;i++)
	{
		printf("\n");
		for(space=1;space<=i-1;space++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%c",j+64);
		}
	}
	return 0;
}
