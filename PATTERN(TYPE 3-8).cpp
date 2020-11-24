#include<stdio.h>
#include<conio.h>
int main()
{
	int h,i,j;
	scanf("%d",&h);
	for(i=1;i<=5;i++)
	{
		printf("\n");
		for(j=5;j>=i;j--)
		{
			printf("%c",j+64);
		}
	}
	return 0;
}
