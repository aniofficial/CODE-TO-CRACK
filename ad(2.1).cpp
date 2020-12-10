#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n,i,j,z=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=n;j++)
		{
			printf("%d",z);
			z=1-z;
		}
	}
	return 0;
}
