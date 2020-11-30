#include<stdio.h>
#include<conio.h>
int main()
{
  int n,s,i,k=1,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  	for(s=i;s<n;s++)
  	{
  		printf(" ");
	}
	for(j=1;j<=2*i-1;j++)
	{
		printf("%d",k);
		k=k+1;
	}
	printf("\n");
  }
  return 0;
}
