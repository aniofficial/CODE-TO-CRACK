#include<stdio.h>
#include<conio.h>
int main()
{
	int h,i,j;
	scanf("%d",&h);
	for(i=5;i>=1;i--)
	{
		printf("\n");
		for(j=5;j>=i;j--)
		{
			printf("%d",i);
		}
	}
	return 0;
}
