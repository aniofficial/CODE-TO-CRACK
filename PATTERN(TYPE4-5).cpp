#include<stdio.h>
#include<conio.h>
int main(void)
{
	int i,j,space,n;
	scanf("%d",&n);
	for(i=5;i>=1;i--)
	{
		printf("\n");
		for(space=1;space<=i-1;space++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d",i);
		}
	}
	return 0;
}
