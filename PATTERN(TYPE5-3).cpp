#include<stdio.h>
#include<conio.h>
int main(void)
{
	int i,j,space,h;
	scanf("%d",&h);
	for(i=5;i>=1;i--)
	{
		printf("\n");
		for(space=h;space>i;space--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",i+64);
		}
	}
	return 0;
}
