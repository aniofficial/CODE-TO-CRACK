#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n,i,j;
	printf("Input: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("\n"); 
		for(j=n;j>i;j--)
		{
			printf("%d",j);  //----1)
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%d",i);  //----2)
		}
		for(j=i+1;j<=n;j++)
		{
			printf("%d",j);  //----3)
		}
	}
	for(i=1;i<n;i++)
	{
		printf("\n");
		for(j=n;j>i;j--)
		{
			printf("%d",j); //-----4)
		}
		for(j=1;j<=i*2-1;j++)
		{
			printf("%d",i+1);  //---5)
		}
		for(j=i+1;j<=n;j++)
		{
			printf("%d",j);   //-----6)
		}
	}
	return 0;
}
