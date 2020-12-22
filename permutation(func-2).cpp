//no argument with return type CALCULATE PERMUTATION
#include<stdio.h>
int permutation()
{
	int n,r,i,fact1=1,fact2=1,j;
	scanf("%d%d",&n,&r);
	for(i=n;i>1;i--)
	{
		fact1=fact1*i;
	}
	for(j=n-r;j>1;j--)
	{
		fact2=fact2*j;
	}
	return (fact1/fact2);
}
int main(void)
{
	int x;
	x=permutation();
	printf("The value after permutation is--->%d",x);
	return 0;
}
