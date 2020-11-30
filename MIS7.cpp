#include<stdio.h>
#include<conio.h>
int main(void)
{
	int i,j,z=0,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		z=0;
		for(j=1;j<=i;j++)
		{
			z=1-z;
			printf("%d",z);
		}
	}
	return 0;
}
