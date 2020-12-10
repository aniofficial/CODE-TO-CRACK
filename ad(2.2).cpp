#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n,i,j,k=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=n;j++)
		{
			printf("%d",k%10);
			k++;
		}
	}
	return 0;
}
