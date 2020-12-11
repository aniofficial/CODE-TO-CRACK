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
			if(i==1||i==n||j==1||j==n)
			{
				printf("%d",k%10);
				k++;
			}
			
			else
			{
				printf(" ");
			}
		}
	}
	return 0;
}
