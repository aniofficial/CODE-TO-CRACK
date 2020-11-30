#include<stdio.h>
#include<conio.h>
int main(void)
{
	int i,j,space,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(space=1;space<=n-i;space++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",j+64);
		}
	}
	return 0;
}
