#include<stdio.h>
#include<conio.h>
int main()
{
	int h,i,j;
	scanf("%d",&h);
	for(i=5;i>=1;i--)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
	}
	return 0;
}
