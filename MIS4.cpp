#include<stdio.h>
#include<conio.h>
int main()
{
  int n,s,i,k=1,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  	for(s=n-1;s>=i;s--)
  	{
  		printf(" ");
	}
	for(j=1;j<=k;j++)
	{
		printf("%d",k);
	}
	k=k+2;
	printf("\n");
  }
  return 0;
}
