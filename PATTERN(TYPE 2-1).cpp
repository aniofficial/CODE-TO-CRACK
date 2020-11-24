#include<stdio.h>
#include<conio.h>
int main()
{
	int h,i,j;
	scanf("%d",&h);
	for(i=1;i<=h;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
	}
	return 0;
}
