#include<stdio.h>
#include<conio.h>
int main()
{
	int h,i,j;
	scanf("%d",&h);
	for(i=h;i>=1;i--)
	{
		printf("\n");
		for(j=i;j<=h;j++)
		{
			printf("%c",i+64);
		}
	}
	return 0;
}
