#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n,i,j,sp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(sp=1;sp<=i;sp++)
		{
			printf(" ");	
		}
		for(j=1;j<=2*(n-i)+1;j++)
		{
			printf("*");
		}
	}
	for(i=n-1;i>=1;i--)
   {
   		printf("\n");
    	for (sp=1;sp<=i;sp++)
      		printf(" ");

    	for (j= 1; j<= 2*(n-i)+1;j++)
      		printf("*");
   }
   return 0;
}
