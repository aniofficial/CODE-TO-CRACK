#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n,k,c;
	scanf("%d",&n);
	for (k = 1; k <= n - 1; k++)
   {
    	for (c = 1; c <= k; c++)
      		printf(" ");

    	for (c = 1 ; c <= 2*(n-k)-1; c++)
      		printf("*");
    	printf("\n");
	}
	return 0;
}
